#include <sun/font/Underline.h>

#include <java/awt/Graphics2D.h>
#include <java/awt/Shape.h>
#include <java/awt/font/TextAttribute.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <sun/font/Underline$IMGrayUnderline.h>
#include <sun/font/Underline$StandardUnderline.h>
#include <jcpp.h>

#undef DEFAULT_THICKNESS
#undef IGNORE_THICKNESS
#undef UNDERLINES
#undef UNDERLINE_LIST
#undef UNDERLINE_LOW_DASHED
#undef UNDERLINE_LOW_DOTTED
#undef UNDERLINE_LOW_GRAY
#undef UNDERLINE_LOW_ONE_PIXEL
#undef UNDERLINE_LOW_TWO_PIXEL
#undef UNDERLINE_ON
#undef USE_THICKNESS

using $UnderlineArray = $Array<::sun::font::Underline>;
using $Graphics2D = ::java::awt::Graphics2D;
using $Shape = ::java::awt::Shape;
using $TextAttribute = ::java::awt::font::TextAttribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Underline$IMGrayUnderline = ::sun::font::Underline$IMGrayUnderline;
using $Underline$StandardUnderline = ::sun::font::Underline$StandardUnderline;

namespace sun {
	namespace font {

$FieldInfo _Underline_FieldInfo_[] = {
	{"DEFAULT_THICKNESS", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Underline, DEFAULT_THICKNESS)},
	{"USE_THICKNESS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Underline, USE_THICKNESS)},
	{"IGNORE_THICKNESS", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Underline, IGNORE_THICKNESS)},
	{"UNDERLINES", "Ljava/util/concurrent/ConcurrentHashMap;", "Ljava/util/concurrent/ConcurrentHashMap<Ljava/lang/Object;Lsun/font/Underline;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Underline, UNDERLINES)},
	{"UNDERLINE_LIST", "[Lsun/font/Underline;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Underline, UNDERLINE_LIST)},
	{}
};

$MethodInfo _Underline_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Underline::*)()>(&Underline::init$))},
	{"drawUnderline", "(Ljava/awt/Graphics2D;FFFF)V", nullptr, $ABSTRACT},
	{"getLowerDrawLimit", "(F)F", nullptr, $ABSTRACT},
	{"getUnderline", "(Ljava/lang/Object;)Lsun/font/Underline;", nullptr, $STATIC, $method(static_cast<Underline*(*)(Object$*)>(&Underline::getUnderline))},
	{"getUnderline", "(I)Lsun/font/Underline;", nullptr, $STATIC, $method(static_cast<Underline*(*)(int32_t)>(&Underline::getUnderline))},
	{"getUnderlineShape", "(FFFF)Ljava/awt/Shape;", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _Underline_InnerClassesInfo_[] = {
	{"sun.font.Underline$IMGrayUnderline", "sun.font.Underline", "IMGrayUnderline", $PRIVATE | $STATIC},
	{"sun.font.Underline$StandardUnderline", "sun.font.Underline", "StandardUnderline", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Underline_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.font.Underline",
	"java.lang.Object",
	nullptr,
	_Underline_FieldInfo_,
	_Underline_MethodInfo_,
	nullptr,
	nullptr,
	_Underline_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.font.Underline$IMGrayUnderline,sun.font.Underline$StandardUnderline"
};

$Object* allocate$Underline($Class* clazz) {
	return $of($alloc(Underline));
}

float Underline::DEFAULT_THICKNESS = 0.0;
$ConcurrentHashMap* Underline::UNDERLINES = nullptr;
$UnderlineArray* Underline::UNDERLINE_LIST = nullptr;

void Underline::init$() {
}

Underline* Underline::getUnderline(Object$* value) {
	$init(Underline);
	if (value == nullptr) {
		return nullptr;
	}
	return $cast(Underline, $nc(Underline::UNDERLINES)->get(value));
}

Underline* Underline::getUnderline(int32_t index) {
	$init(Underline);
	return index < 0 ? (Underline*)nullptr : $nc(Underline::UNDERLINE_LIST)->get(index);
}

void clinit$Underline($Class* class$) {
	$useLocalCurrentObjectStackCache();
	Underline::DEFAULT_THICKNESS = 1.0f;
	$assignStatic(Underline::UNDERLINES, $new($ConcurrentHashMap, 6));
	{
		$var($UnderlineArray, uls, $new($UnderlineArray, 6));
		uls->set(0, $$new($Underline$StandardUnderline, (float)0, (float)1, nullptr, Underline::USE_THICKNESS));
		$init($TextAttribute);
		$nc(Underline::UNDERLINES)->put($TextAttribute::UNDERLINE_ON, uls->get(0));
		uls->set(1, $$new($Underline$StandardUnderline, (float)1, (float)1, nullptr, Underline::IGNORE_THICKNESS));
		$nc(Underline::UNDERLINES)->put($TextAttribute::UNDERLINE_LOW_ONE_PIXEL, uls->get(1));
		uls->set(2, $$new($Underline$StandardUnderline, (float)1, (float)2, nullptr, Underline::IGNORE_THICKNESS));
		$nc(Underline::UNDERLINES)->put($TextAttribute::UNDERLINE_LOW_TWO_PIXEL, uls->get(2));
		uls->set(3, $$new($Underline$StandardUnderline, (float)1, (float)1, $$new($floats, {
			(float)1,
			(float)1
		}), Underline::IGNORE_THICKNESS));
		$nc(Underline::UNDERLINES)->put($TextAttribute::UNDERLINE_LOW_DOTTED, uls->get(3));
		uls->set(4, $$new($Underline$IMGrayUnderline));
		$nc(Underline::UNDERLINES)->put($TextAttribute::UNDERLINE_LOW_GRAY, uls->get(4));
		uls->set(5, $$new($Underline$StandardUnderline, (float)1, (float)1, $$new($floats, {
			(float)4,
			(float)4
		}), Underline::IGNORE_THICKNESS));
		$nc(Underline::UNDERLINES)->put($TextAttribute::UNDERLINE_LOW_DASHED, uls->get(5));
		$assignStatic(Underline::UNDERLINE_LIST, uls);
	}
}

Underline::Underline() {
}

$Class* Underline::load$($String* name, bool initialize) {
	$loadClass(Underline, name, initialize, &_Underline_ClassInfo_, clinit$Underline, allocate$Underline);
	return class$;
}

$Class* Underline::class$ = nullptr;

	} // font
} // sun