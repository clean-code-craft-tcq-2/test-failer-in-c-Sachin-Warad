float FarenheitToCelciusConverter(float farenheit);
int networkAlertStub(float celcius);
void alertInCelcius(float farenheit, int (*Fn_Ptr_NetworkAlert)(float));
void testTempAlerter(int expectedFailCount);

#define Alert_Threshold 200
