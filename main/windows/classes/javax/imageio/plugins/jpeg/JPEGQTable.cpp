#include <javax/imageio/plugins/jpeg/JPEGQTable.h>

#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace jpeg {

$FieldInfo _JPEGQTable_FieldInfo_[] = {
	{"k1", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGQTable, k1)},
	{"k1div2", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGQTable, k1div2)},
	{"k2", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGQTable, k2)},
	{"k2div2", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JPEGQTable, k2div2)},
	{"K1Luminance", "Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGQTable, K1Luminance)},
	{"K1Div2Luminance", "Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGQTable, K1Div2Luminance)},
	{"K2Chrominance", "Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGQTable, K2Chrominance)},
	{"K2Div2Chrominance", "Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JPEGQTable, K2Div2Chrominance)},
	{"qTable", "[I", nullptr, $PRIVATE, $field(JPEGQTable, qTable)},
	{}
};

$MethodInfo _JPEGQTable_MethodInfo_[] = {
	{"<init>", "([IZ)V", nullptr, $PRIVATE, $method(static_cast<void(JPEGQTable::*)($ints*,bool)>(&JPEGQTable::init$))},
	{"<init>", "([I)V", nullptr, $PUBLIC, $method(static_cast<void(JPEGQTable::*)($ints*)>(&JPEGQTable::init$))},
	{"getScaledInstance", "(FZ)Ljavax/imageio/plugins/jpeg/JPEGQTable;", nullptr, $PUBLIC},
	{"getTable", "()[I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JPEGQTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.plugins.jpeg.JPEGQTable",
	"java.lang.Object",
	nullptr,
	_JPEGQTable_FieldInfo_,
	_JPEGQTable_MethodInfo_
};

$Object* allocate$JPEGQTable($Class* clazz) {
	return $of($alloc(JPEGQTable));
}

$ints* JPEGQTable::k1 = nullptr;
$ints* JPEGQTable::k1div2 = nullptr;
$ints* JPEGQTable::k2 = nullptr;
$ints* JPEGQTable::k2div2 = nullptr;

JPEGQTable* JPEGQTable::K1Luminance = nullptr;

JPEGQTable* JPEGQTable::K1Div2Luminance = nullptr;

JPEGQTable* JPEGQTable::K2Chrominance = nullptr;

JPEGQTable* JPEGQTable::K2Div2Chrominance = nullptr;

void JPEGQTable::init$($ints* table, bool copy) {
	$set(this, qTable, (copy) ? $Arrays::copyOf(table, $nc(table)->length) : table);
}

void JPEGQTable::init$($ints* table) {
	if (table == nullptr) {
		$throwNew($IllegalArgumentException, "table must not be null."_s);
	}
	if ($nc(table)->length != 64) {
		$throwNew($IllegalArgumentException, "table.length != 64"_s);
	}
	$set(this, qTable, $Arrays::copyOf(table, $nc(table)->length));
}

$ints* JPEGQTable::getTable() {
	return $Arrays::copyOf(this->qTable, $nc(this->qTable)->length);
}

JPEGQTable* JPEGQTable::getScaledInstance(float scaleFactor, bool forceBaseline) {
	int32_t max = (forceBaseline) ? 255 : 32767;
	$var($ints, scaledTable, $new($ints, $nc(this->qTable)->length));
	for (int32_t i = 0; i < $nc(this->qTable)->length; ++i) {
		int32_t sv = $cast(int32_t, (($nc(this->qTable)->get(i) * scaleFactor) + 0.5f));
		if (sv < 1) {
			sv = 1;
		}
		if (sv > max) {
			sv = max;
		}
		scaledTable->set(i, sv);
	}
	return $new(JPEGQTable, scaledTable);
}

$String* JPEGQTable::toString() {
	$var($String, ls, $System::getProperty("line.separator"_s, "\n"_s));
	$var($StringBuilder, sb, $new($StringBuilder, $$str({"JPEGQTable:"_s, ls})));
	for (int32_t i = 0; i < $nc(this->qTable)->length; ++i) {
		if (i % 8 == 0) {
			sb->append(u'\t');
		}
		sb->append($nc(this->qTable)->get(i));
		sb->append(((i % 8) == 7) ? $of(ls) : $($of($Character::valueOf(u' '))));
	}
	return sb->toString();
}

void clinit$JPEGQTable($Class* class$) {
	$assignStatic(JPEGQTable::k1, $new($ints, {
		16,
		11,
		10,
		16,
		24,
		40,
		51,
		61,
		12,
		12,
		14,
		19,
		26,
		58,
		60,
		55,
		14,
		13,
		16,
		24,
		40,
		57,
		69,
		56,
		14,
		17,
		22,
		29,
		51,
		87,
		80,
		62,
		18,
		22,
		37,
		56,
		68,
		109,
		103,
		77,
		24,
		35,
		55,
		64,
		81,
		104,
		113,
		92,
		49,
		64,
		78,
		87,
		103,
		121,
		120,
		101,
		72,
		92,
		95,
		98,
		112,
		100,
		103,
		99
	}));
	$assignStatic(JPEGQTable::k1div2, $new($ints, {
		8,
		6,
		5,
		8,
		12,
		20,
		26,
		31,
		6,
		6,
		7,
		10,
		13,
		29,
		30,
		28,
		7,
		7,
		8,
		12,
		20,
		29,
		35,
		28,
		7,
		9,
		11,
		15,
		26,
		44,
		40,
		31,
		9,
		11,
		19,
		28,
		34,
		55,
		52,
		39,
		12,
		18,
		28,
		32,
		41,
		52,
		57,
		46,
		25,
		32,
		39,
		44,
		52,
		61,
		60,
		51,
		36,
		46,
		48,
		49,
		56,
		50,
		52,
		50
	}));
	$assignStatic(JPEGQTable::k2, $new($ints, {
		17,
		18,
		24,
		47,
		99,
		99,
		99,
		99,
		18,
		21,
		26,
		66,
		99,
		99,
		99,
		99,
		24,
		26,
		56,
		99,
		99,
		99,
		99,
		99,
		47,
		66,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99,
		99
	}));
	$assignStatic(JPEGQTable::k2div2, $new($ints, {
		9,
		9,
		12,
		24,
		50,
		50,
		50,
		50,
		9,
		11,
		13,
		33,
		50,
		50,
		50,
		50,
		12,
		13,
		28,
		50,
		50,
		50,
		50,
		50,
		24,
		33,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50
	}));
	$assignStatic(JPEGQTable::K1Luminance, $new(JPEGQTable, JPEGQTable::k1, false));
	$assignStatic(JPEGQTable::K1Div2Luminance, $new(JPEGQTable, JPEGQTable::k1div2, false));
	$assignStatic(JPEGQTable::K2Chrominance, $new(JPEGQTable, JPEGQTable::k2, false));
	$assignStatic(JPEGQTable::K2Div2Chrominance, $new(JPEGQTable, JPEGQTable::k2div2, false));
}

JPEGQTable::JPEGQTable() {
}

$Class* JPEGQTable::load$($String* name, bool initialize) {
	$loadClass(JPEGQTable, name, initialize, &_JPEGQTable_ClassInfo_, clinit$JPEGQTable, allocate$JPEGQTable);
	return class$;
}

$Class* JPEGQTable::class$ = nullptr;

			} // jpeg
		} // plugins
	} // imageio
} // javax