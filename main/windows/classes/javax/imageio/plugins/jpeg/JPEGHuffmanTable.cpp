#include <javax/imageio/plugins/jpeg/JPEGHuffmanTable.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace jpeg {

$FieldInfo _JPEGHuffmanTable_FieldInfo_[] = {
	{"StdDCLuminanceLengths", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCLuminanceLengths)},
	{"StdDCLuminanceValues", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCLuminanceValues)},
	{"StdDCChrominanceLengths", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCChrominanceLengths)},
	{"StdDCChrominanceValues", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCChrominanceValues)},
	{"StdACLuminanceLengths", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACLuminanceLengths)},
	{"StdACLuminanceValues", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACLuminanceValues)},
	{"StdACChrominanceLengths", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACChrominanceLengths)},
	{"StdACChrominanceValues", "[S", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACChrominanceValues)},
	{"StdDCLuminance", "Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCLuminance)},
	{"StdDCChrominance", "Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdDCChrominance)},
	{"StdACLuminance", "Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACLuminance)},
	{"StdACChrominance", "Ljavax/imageio/plugins/jpeg/JPEGHuffmanTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGHuffmanTable, StdACChrominance)},
	{"lengths", "[S", nullptr, $PRIVATE, $field(JPEGHuffmanTable, lengths)},
	{"values", "[S", nullptr, $PRIVATE, $field(JPEGHuffmanTable, values)},
	{}
};

$MethodInfo _JPEGHuffmanTable_MethodInfo_[] = {
	{"<init>", "([S[S)V", nullptr, $PUBLIC, $method(static_cast<void(JPEGHuffmanTable::*)($shorts*,$shorts*)>(&JPEGHuffmanTable::init$))},
	{"<init>", "([S[SZ)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGHuffmanTable::*)($shorts*,$shorts*,bool)>(&JPEGHuffmanTable::init$))},
	{"getLengths", "()[S", nullptr, $PUBLIC},
	{"getValues", "()[S", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "()V", nullptr, $PRIVATE, $method(static_cast<void(JPEGHuffmanTable::*)()>(&JPEGHuffmanTable::validate))},
	{}
};

$ClassInfo _JPEGHuffmanTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.plugins.jpeg.JPEGHuffmanTable",
	"java.lang.Object",
	nullptr,
	_JPEGHuffmanTable_FieldInfo_,
	_JPEGHuffmanTable_MethodInfo_
};

$Object* allocate$JPEGHuffmanTable($Class* clazz) {
	return $of($alloc(JPEGHuffmanTable));
}

$shorts* JPEGHuffmanTable::StdDCLuminanceLengths = nullptr;
$shorts* JPEGHuffmanTable::StdDCLuminanceValues = nullptr;
$shorts* JPEGHuffmanTable::StdDCChrominanceLengths = nullptr;
$shorts* JPEGHuffmanTable::StdDCChrominanceValues = nullptr;
$shorts* JPEGHuffmanTable::StdACLuminanceLengths = nullptr;
$shorts* JPEGHuffmanTable::StdACLuminanceValues = nullptr;
$shorts* JPEGHuffmanTable::StdACChrominanceLengths = nullptr;
$shorts* JPEGHuffmanTable::StdACChrominanceValues = nullptr;

JPEGHuffmanTable* JPEGHuffmanTable::StdDCLuminance = nullptr;

JPEGHuffmanTable* JPEGHuffmanTable::StdDCChrominance = nullptr;

JPEGHuffmanTable* JPEGHuffmanTable::StdACLuminance = nullptr;

JPEGHuffmanTable* JPEGHuffmanTable::StdACChrominance = nullptr;

void JPEGHuffmanTable::init$($shorts* lengths, $shorts* values) {
	$useLocalCurrentObjectStackCache();
	if (lengths == nullptr || values == nullptr || $nc(lengths)->length == 0 || $nc(values)->length == 0 || $nc(lengths)->length > 16 || $nc(values)->length > 256) {
		$throwNew($IllegalArgumentException, "Illegal lengths or values"_s);
	}
	for (int32_t i = 0; i < $nc(lengths)->length; ++i) {
		if (lengths->get(i) < 0) {
			$throwNew($IllegalArgumentException, $$str({"lengths["_s, $$str(i), "] < 0"_s}));
		}
	}
	for (int32_t i = 0; i < $nc(values)->length; ++i) {
		if (values->get(i) < 0) {
			$throwNew($IllegalArgumentException, $$str({"values["_s, $$str(i), "] < 0"_s}));
		}
	}
	$set(this, lengths, $Arrays::copyOf(lengths, $nc(lengths)->length));
	$set(this, values, $Arrays::copyOf(values, $nc(values)->length));
	validate();
}

void JPEGHuffmanTable::validate() {
	int32_t sumOfLengths = 0;
	for (int32_t i = 0; i < $nc(this->lengths)->length; ++i) {
		sumOfLengths += $nc(this->lengths)->get(i);
	}
	if (sumOfLengths != $nc(this->values)->length) {
		$throwNew($IllegalArgumentException, "lengths do not correspond to length of value table"_s);
	}
}

void JPEGHuffmanTable::init$($shorts* lengths, $shorts* values, bool copy) {
	if (copy) {
		$set(this, lengths, $Arrays::copyOf(lengths, $nc(lengths)->length));
		$set(this, values, $Arrays::copyOf(values, $nc(values)->length));
	} else {
		$set(this, lengths, lengths);
		$set(this, values, values);
	}
}

$shorts* JPEGHuffmanTable::getLengths() {
	return $Arrays::copyOf(this->lengths, $nc(this->lengths)->length);
}

$shorts* JPEGHuffmanTable::getValues() {
	return $Arrays::copyOf(this->values, $nc(this->values)->length);
}

$String* JPEGHuffmanTable::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, ls, $System::getProperty("line.separator"_s, "\n"_s));
	$var($StringBuilder, sb, $new($StringBuilder, "JPEGHuffmanTable"_s));
	sb->append(ls)->append("lengths:"_s);
	for (int32_t i = 0; i < $nc(this->lengths)->length; ++i) {
		sb->append(" "_s)->append((int32_t)$nc(this->lengths)->get(i));
	}
	sb->append(ls)->append("values:"_s);
	for (int32_t i = 0; i < $nc(this->values)->length; ++i) {
		sb->append(" "_s)->append((int32_t)$nc(this->values)->get(i));
	}
	return sb->toString();
}

void clinit$JPEGHuffmanTable($Class* class$) {
	$assignStatic(JPEGHuffmanTable::StdDCLuminanceLengths, $new($shorts, {
		(int16_t)0,
		(int16_t)1,
		(int16_t)5,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0
	}));
	$assignStatic(JPEGHuffmanTable::StdDCLuminanceValues, $new($shorts, {
		(int16_t)0,
		(int16_t)1,
		(int16_t)2,
		(int16_t)3,
		(int16_t)4,
		(int16_t)5,
		(int16_t)6,
		(int16_t)7,
		(int16_t)8,
		(int16_t)9,
		(int16_t)10,
		(int16_t)11
	}));
	$assignStatic(JPEGHuffmanTable::StdDCChrominanceLengths, $new($shorts, {
		(int16_t)0,
		(int16_t)3,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)1,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0,
		(int16_t)0
	}));
	$assignStatic(JPEGHuffmanTable::StdDCChrominanceValues, $new($shorts, {
		(int16_t)0,
		(int16_t)1,
		(int16_t)2,
		(int16_t)3,
		(int16_t)4,
		(int16_t)5,
		(int16_t)6,
		(int16_t)7,
		(int16_t)8,
		(int16_t)9,
		(int16_t)10,
		(int16_t)11
	}));
	$assignStatic(JPEGHuffmanTable::StdACLuminanceLengths, $new($shorts, {
		(int16_t)0,
		(int16_t)2,
		(int16_t)1,
		(int16_t)3,
		(int16_t)3,
		(int16_t)2,
		(int16_t)4,
		(int16_t)3,
		(int16_t)5,
		(int16_t)5,
		(int16_t)4,
		(int16_t)4,
		(int16_t)0,
		(int16_t)0,
		(int16_t)1,
		(int16_t)125
	}));
	$assignStatic(JPEGHuffmanTable::StdACLuminanceValues, $new($shorts, {
		(int16_t)1,
		(int16_t)2,
		(int16_t)3,
		(int16_t)0,
		(int16_t)4,
		(int16_t)17,
		(int16_t)5,
		(int16_t)18,
		(int16_t)33,
		(int16_t)49,
		(int16_t)65,
		(int16_t)6,
		(int16_t)19,
		(int16_t)81,
		(int16_t)97,
		(int16_t)7,
		(int16_t)34,
		(int16_t)113,
		(int16_t)20,
		(int16_t)50,
		(int16_t)129,
		(int16_t)145,
		(int16_t)161,
		(int16_t)8,
		(int16_t)35,
		(int16_t)66,
		(int16_t)177,
		(int16_t)193,
		(int16_t)21,
		(int16_t)82,
		(int16_t)209,
		(int16_t)240,
		(int16_t)36,
		(int16_t)51,
		(int16_t)98,
		(int16_t)114,
		(int16_t)130,
		(int16_t)9,
		(int16_t)10,
		(int16_t)22,
		(int16_t)23,
		(int16_t)24,
		(int16_t)25,
		(int16_t)26,
		(int16_t)37,
		(int16_t)38,
		(int16_t)39,
		(int16_t)40,
		(int16_t)41,
		(int16_t)42,
		(int16_t)52,
		(int16_t)53,
		(int16_t)54,
		(int16_t)55,
		(int16_t)56,
		(int16_t)57,
		(int16_t)58,
		(int16_t)67,
		(int16_t)68,
		(int16_t)69,
		(int16_t)70,
		(int16_t)71,
		(int16_t)72,
		(int16_t)73,
		(int16_t)74,
		(int16_t)83,
		(int16_t)84,
		(int16_t)85,
		(int16_t)86,
		(int16_t)87,
		(int16_t)88,
		(int16_t)89,
		(int16_t)90,
		(int16_t)99,
		(int16_t)100,
		(int16_t)101,
		(int16_t)102,
		(int16_t)103,
		(int16_t)104,
		(int16_t)105,
		(int16_t)106,
		(int16_t)115,
		(int16_t)116,
		(int16_t)117,
		(int16_t)118,
		(int16_t)119,
		(int16_t)120,
		(int16_t)121,
		(int16_t)122,
		(int16_t)131,
		(int16_t)132,
		(int16_t)133,
		(int16_t)134,
		(int16_t)135,
		(int16_t)136,
		(int16_t)137,
		(int16_t)138,
		(int16_t)146,
		(int16_t)147,
		(int16_t)148,
		(int16_t)149,
		(int16_t)150,
		(int16_t)151,
		(int16_t)152,
		(int16_t)153,
		(int16_t)154,
		(int16_t)162,
		(int16_t)163,
		(int16_t)164,
		(int16_t)165,
		(int16_t)166,
		(int16_t)167,
		(int16_t)168,
		(int16_t)169,
		(int16_t)170,
		(int16_t)178,
		(int16_t)179,
		(int16_t)180,
		(int16_t)181,
		(int16_t)182,
		(int16_t)183,
		(int16_t)184,
		(int16_t)185,
		(int16_t)186,
		(int16_t)194,
		(int16_t)195,
		(int16_t)196,
		(int16_t)197,
		(int16_t)198,
		(int16_t)199,
		(int16_t)200,
		(int16_t)201,
		(int16_t)202,
		(int16_t)210,
		(int16_t)211,
		(int16_t)212,
		(int16_t)213,
		(int16_t)214,
		(int16_t)215,
		(int16_t)216,
		(int16_t)217,
		(int16_t)218,
		(int16_t)225,
		(int16_t)226,
		(int16_t)227,
		(int16_t)228,
		(int16_t)229,
		(int16_t)230,
		(int16_t)231,
		(int16_t)232,
		(int16_t)233,
		(int16_t)234,
		(int16_t)241,
		(int16_t)242,
		(int16_t)243,
		(int16_t)244,
		(int16_t)245,
		(int16_t)246,
		(int16_t)247,
		(int16_t)248,
		(int16_t)249,
		(int16_t)250
	}));
	$assignStatic(JPEGHuffmanTable::StdACChrominanceLengths, $new($shorts, {
		(int16_t)0,
		(int16_t)2,
		(int16_t)1,
		(int16_t)2,
		(int16_t)4,
		(int16_t)4,
		(int16_t)3,
		(int16_t)4,
		(int16_t)7,
		(int16_t)5,
		(int16_t)4,
		(int16_t)4,
		(int16_t)0,
		(int16_t)1,
		(int16_t)2,
		(int16_t)119
	}));
	$assignStatic(JPEGHuffmanTable::StdACChrominanceValues, $new($shorts, {
		(int16_t)0,
		(int16_t)1,
		(int16_t)2,
		(int16_t)3,
		(int16_t)17,
		(int16_t)4,
		(int16_t)5,
		(int16_t)33,
		(int16_t)49,
		(int16_t)6,
		(int16_t)18,
		(int16_t)65,
		(int16_t)81,
		(int16_t)7,
		(int16_t)97,
		(int16_t)113,
		(int16_t)19,
		(int16_t)34,
		(int16_t)50,
		(int16_t)129,
		(int16_t)8,
		(int16_t)20,
		(int16_t)66,
		(int16_t)145,
		(int16_t)161,
		(int16_t)177,
		(int16_t)193,
		(int16_t)9,
		(int16_t)35,
		(int16_t)51,
		(int16_t)82,
		(int16_t)240,
		(int16_t)21,
		(int16_t)98,
		(int16_t)114,
		(int16_t)209,
		(int16_t)10,
		(int16_t)22,
		(int16_t)36,
		(int16_t)52,
		(int16_t)225,
		(int16_t)37,
		(int16_t)241,
		(int16_t)23,
		(int16_t)24,
		(int16_t)25,
		(int16_t)26,
		(int16_t)38,
		(int16_t)39,
		(int16_t)40,
		(int16_t)41,
		(int16_t)42,
		(int16_t)53,
		(int16_t)54,
		(int16_t)55,
		(int16_t)56,
		(int16_t)57,
		(int16_t)58,
		(int16_t)67,
		(int16_t)68,
		(int16_t)69,
		(int16_t)70,
		(int16_t)71,
		(int16_t)72,
		(int16_t)73,
		(int16_t)74,
		(int16_t)83,
		(int16_t)84,
		(int16_t)85,
		(int16_t)86,
		(int16_t)87,
		(int16_t)88,
		(int16_t)89,
		(int16_t)90,
		(int16_t)99,
		(int16_t)100,
		(int16_t)101,
		(int16_t)102,
		(int16_t)103,
		(int16_t)104,
		(int16_t)105,
		(int16_t)106,
		(int16_t)115,
		(int16_t)116,
		(int16_t)117,
		(int16_t)118,
		(int16_t)119,
		(int16_t)120,
		(int16_t)121,
		(int16_t)122,
		(int16_t)130,
		(int16_t)131,
		(int16_t)132,
		(int16_t)133,
		(int16_t)134,
		(int16_t)135,
		(int16_t)136,
		(int16_t)137,
		(int16_t)138,
		(int16_t)146,
		(int16_t)147,
		(int16_t)148,
		(int16_t)149,
		(int16_t)150,
		(int16_t)151,
		(int16_t)152,
		(int16_t)153,
		(int16_t)154,
		(int16_t)162,
		(int16_t)163,
		(int16_t)164,
		(int16_t)165,
		(int16_t)166,
		(int16_t)167,
		(int16_t)168,
		(int16_t)169,
		(int16_t)170,
		(int16_t)178,
		(int16_t)179,
		(int16_t)180,
		(int16_t)181,
		(int16_t)182,
		(int16_t)183,
		(int16_t)184,
		(int16_t)185,
		(int16_t)186,
		(int16_t)194,
		(int16_t)195,
		(int16_t)196,
		(int16_t)197,
		(int16_t)198,
		(int16_t)199,
		(int16_t)200,
		(int16_t)201,
		(int16_t)202,
		(int16_t)210,
		(int16_t)211,
		(int16_t)212,
		(int16_t)213,
		(int16_t)214,
		(int16_t)215,
		(int16_t)216,
		(int16_t)217,
		(int16_t)218,
		(int16_t)226,
		(int16_t)227,
		(int16_t)228,
		(int16_t)229,
		(int16_t)230,
		(int16_t)231,
		(int16_t)232,
		(int16_t)233,
		(int16_t)234,
		(int16_t)242,
		(int16_t)243,
		(int16_t)244,
		(int16_t)245,
		(int16_t)246,
		(int16_t)247,
		(int16_t)248,
		(int16_t)249,
		(int16_t)250
	}));
	$assignStatic(JPEGHuffmanTable::StdDCLuminance, $new(JPEGHuffmanTable, JPEGHuffmanTable::StdDCLuminanceLengths, JPEGHuffmanTable::StdDCLuminanceValues, false));
	$assignStatic(JPEGHuffmanTable::StdDCChrominance, $new(JPEGHuffmanTable, JPEGHuffmanTable::StdDCChrominanceLengths, JPEGHuffmanTable::StdDCChrominanceValues, false));
	$assignStatic(JPEGHuffmanTable::StdACLuminance, $new(JPEGHuffmanTable, JPEGHuffmanTable::StdACLuminanceLengths, JPEGHuffmanTable::StdACLuminanceValues, false));
	$assignStatic(JPEGHuffmanTable::StdACChrominance, $new(JPEGHuffmanTable, JPEGHuffmanTable::StdACChrominanceLengths, JPEGHuffmanTable::StdACChrominanceValues, false));
}

JPEGHuffmanTable::JPEGHuffmanTable() {
}

$Class* JPEGHuffmanTable::load$($String* name, bool initialize) {
	$loadClass(JPEGHuffmanTable, name, initialize, &_JPEGHuffmanTable_ClassInfo_, clinit$JPEGHuffmanTable, allocate$JPEGHuffmanTable);
	return class$;
}

$Class* JPEGHuffmanTable::class$ = nullptr;

			} // jpeg
		} // plugins
	} // imageio
} // javax