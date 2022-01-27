#include <stdio.h>
#include <assert.h>

int alertFailureCount = 0;
#define Alert_Threshold 200

float ConvertFarenheitToCelcius(float farenheit);

int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    if(celcius > Alert_Threshold) {
        return 500;
    } else {
        return 200;
    }
}

float ConvertFarenheitToCelcius(float farenheit) {
    return ((farenheit-32)*5/9);
}
    
void alertInCelcius(float farenheit, int (*Fn_Ptr_NetworkAlert)(float)) {
    float celcius = ConvertFarenheitToCelcius(farenheit);
    int returnCode = Fn_Ptr_NetworkAlert(celcius);
    if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
    }
}

int main() {
    int (*Fcn_Ptr_networkAlert)(float);
    Fcn_Ptr_networkAlert = &networkAlertStub;
    alertInCelcius(303.6,Fcn_Ptr_networkAlert);
    assert(alertFailureCount==0);
    alertInCelcius(400.5,Fcn_Ptr_networkAlert);
    assert(alertFailureCount==1);
    alertInCelcius(500.4,Fcn_Ptr_networkAlert);
    assert(alertFailureCount==2);
    printf("%d alerts failed.\n", alertFailureCount);
    printf("All is well (maybe!)\n");
    return 0;
}
