#include <sun/swing/SwingUtilities2$Section.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef LEADING
#undef MIDDLE
#undef TRAILING

using $SwingUtilities2$SectionArray = $Array<::sun::swing::SwingUtilities2$Section>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace sun {
	namespace swing {

$FieldInfo _SwingUtilities2$Section_FieldInfo_[] = {
	{"LEADING", "Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingUtilities2$Section, LEADING)},
	{"MIDDLE", "Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingUtilities2$Section, MIDDLE)},
	{"TRAILING", "Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SwingUtilities2$Section, TRAILING)},
	{"$VALUES", "[Lsun/swing/SwingUtilities2$Section;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SwingUtilities2$Section, $VALUES)},
	{}
};

$MethodInfo _SwingUtilities2$Section_MethodInfo_[] = {
	{"$values", "()[Lsun/swing/SwingUtilities2$Section;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SwingUtilities2$SectionArray*(*)()>(&SwingUtilities2$Section::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(SwingUtilities2$Section::*)($String*,int32_t)>(&SwingUtilities2$Section::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SwingUtilities2$Section*(*)($String*)>(&SwingUtilities2$Section::valueOf))},
	{"values", "()[Lsun/swing/SwingUtilities2$Section;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SwingUtilities2$SectionArray*(*)()>(&SwingUtilities2$Section::values))},
	{}
};

$InnerClassInfo _SwingUtilities2$Section_InnerClassesInfo_[] = {
	{"sun.swing.SwingUtilities2$Section", "sun.swing.SwingUtilities2", "Section", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SwingUtilities2$Section_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.swing.SwingUtilities2$Section",
	"java.lang.Enum",
	nullptr,
	_SwingUtilities2$Section_FieldInfo_,
	_SwingUtilities2$Section_MethodInfo_,
	"Ljava/lang/Enum<Lsun/swing/SwingUtilities2$Section;>;",
	nullptr,
	_SwingUtilities2$Section_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.SwingUtilities2"
};

$Object* allocate$SwingUtilities2$Section($Class* clazz) {
	return $of($alloc(SwingUtilities2$Section));
}


SwingUtilities2$Section* SwingUtilities2$Section::LEADING = nullptr;

SwingUtilities2$Section* SwingUtilities2$Section::MIDDLE = nullptr;

SwingUtilities2$Section* SwingUtilities2$Section::TRAILING = nullptr;
$SwingUtilities2$SectionArray* SwingUtilities2$Section::$VALUES = nullptr;

$SwingUtilities2$SectionArray* SwingUtilities2$Section::$values() {
	$init(SwingUtilities2$Section);
	return $new($SwingUtilities2$SectionArray, {
		SwingUtilities2$Section::LEADING,
		SwingUtilities2$Section::MIDDLE,
		SwingUtilities2$Section::TRAILING
	});
}

$SwingUtilities2$SectionArray* SwingUtilities2$Section::values() {
	$init(SwingUtilities2$Section);
	return $cast($SwingUtilities2$SectionArray, SwingUtilities2$Section::$VALUES->clone());
}

SwingUtilities2$Section* SwingUtilities2$Section::valueOf($String* name) {
	$init(SwingUtilities2$Section);
	return $cast(SwingUtilities2$Section, $Enum::valueOf(SwingUtilities2$Section::class$, name));
}

void SwingUtilities2$Section::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$SwingUtilities2$Section($Class* class$) {
	$assignStatic(SwingUtilities2$Section::LEADING, $new(SwingUtilities2$Section, "LEADING"_s, 0));
	$assignStatic(SwingUtilities2$Section::MIDDLE, $new(SwingUtilities2$Section, "MIDDLE"_s, 1));
	$assignStatic(SwingUtilities2$Section::TRAILING, $new(SwingUtilities2$Section, "TRAILING"_s, 2));
	$assignStatic(SwingUtilities2$Section::$VALUES, SwingUtilities2$Section::$values());
}

SwingUtilities2$Section::SwingUtilities2$Section() {
}

$Class* SwingUtilities2$Section::load$($String* name, bool initialize) {
	$loadClass(SwingUtilities2$Section, name, initialize, &_SwingUtilities2$Section_ClassInfo_, clinit$SwingUtilities2$Section, allocate$SwingUtilities2$Section);
	return class$;
}

$Class* SwingUtilities2$Section::class$ = nullptr;

	} // swing
} // sun