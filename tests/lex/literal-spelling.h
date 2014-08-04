#define stringify(s) #s

static char a1[10] = stringify(0);
static char a2[10] = stringify(00);
static char a3[10] = stringify(0x0);
static char a4[10] = stringify(123);

static char dec1[10] = stringify(1);
static char dec2[10] = stringify(1l);
static char dec3[10] = stringify(1ll);
static char dec4[10] = stringify(1u);
static char dec5[10] = stringify(1ul);
static char dec6[10] = stringify(1ull);

static char oct1[10] = stringify(01);
static char oct2[10] = stringify(01l);
static char oct3[10] = stringify(01ll);
static char oct4[10] = stringify(01u);
static char oct5[10] = stringify(01ul);
static char oct6[10] = stringify(01ull);

static char hex1[10] = stringify(0x1);
static char hex2[10] = stringify(0x1l);
static char hex3[10] = stringify(0x1ll);
static char hex4[10] = stringify(0x1u);
static char hex5[10] = stringify(0x1ul);
static char hex6[10] = stringify(0x1ull);

static char float1[10] = stringify(1.0);
static char float2[10] = stringify(1.0d);
static char float3[10] = stringify(1.0f);
static char float4[10] = stringify(.1);
static char float5[10] = stringify(1.);
static char float6[10] = stringify(1f);
static char float7[10] = stringify(1d);
