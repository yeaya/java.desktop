#include <javax/print/attribute/standard/MediaSize$JIS.h>

#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <jcpp.h>

#undef CHOU_1
#undef CHOU_2
#undef CHOU_3
#undef CHOU_30
#undef CHOU_4
#undef CHOU_40
#undef JIS_B0
#undef JIS_B1
#undef JIS_B10
#undef JIS_B2
#undef JIS_B3
#undef JIS_B4
#undef JIS_B5
#undef JIS_B6
#undef JIS_B7
#undef JIS_B8
#undef JIS_B9
#undef KAKU_0
#undef KAKU_1
#undef KAKU_2
#undef KAKU_20
#undef KAKU_3
#undef KAKU_4
#undef KAKU_5
#undef KAKU_6
#undef KAKU_7
#undef KAKU_8
#undef KAKU_A4
#undef MM
#undef YOU_1
#undef YOU_2
#undef YOU_3
#undef YOU_4
#undef YOU_5
#undef YOU_6
#undef YOU_7

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _MediaSize$JIS_FieldInfo_[] = {
	{"B0", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, B0)},
	{"B1", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, B1)},
	{"B2", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, B2)},
	{"B3", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, B3)},
	{"B4", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, B4)},
	{"B5", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, B5)},
	{"B6", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, B6)},
	{"B7", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, B7)},
	{"B8", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, B8)},
	{"B9", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, B9)},
	{"B10", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, B10)},
	{"CHOU_1", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, CHOU_1)},
	{"CHOU_2", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, CHOU_2)},
	{"CHOU_3", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, CHOU_3)},
	{"CHOU_4", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, CHOU_4)},
	{"CHOU_30", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, CHOU_30)},
	{"CHOU_40", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, CHOU_40)},
	{"KAKU_0", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, KAKU_0)},
	{"KAKU_1", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, KAKU_1)},
	{"KAKU_2", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, KAKU_2)},
	{"KAKU_3", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, KAKU_3)},
	{"KAKU_4", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, KAKU_4)},
	{"KAKU_5", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, KAKU_5)},
	{"KAKU_6", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, KAKU_6)},
	{"KAKU_7", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, KAKU_7)},
	{"KAKU_8", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, KAKU_8)},
	{"KAKU_20", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, KAKU_20)},
	{"KAKU_A4", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, KAKU_A4)},
	{"YOU_1", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, YOU_1)},
	{"YOU_2", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, YOU_2)},
	{"YOU_3", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, YOU_3)},
	{"YOU_4", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, YOU_4)},
	{"YOU_5", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, YOU_5)},
	{"YOU_6", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, YOU_6)},
	{"YOU_7", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$JIS, YOU_7)},
	{}
};

$MethodInfo _MediaSize$JIS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MediaSize$JIS::*)()>(&MediaSize$JIS::init$))},
	{}
};

$InnerClassInfo _MediaSize$JIS_InnerClassesInfo_[] = {
	{"javax.print.attribute.standard.MediaSize$JIS", "javax.print.attribute.standard.MediaSize", "JIS", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _MediaSize$JIS_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.MediaSize$JIS",
	"java.lang.Object",
	nullptr,
	_MediaSize$JIS_FieldInfo_,
	_MediaSize$JIS_MethodInfo_,
	nullptr,
	nullptr,
	_MediaSize$JIS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.standard.MediaSize"
};

$Object* allocate$MediaSize$JIS($Class* clazz) {
	return $of($alloc(MediaSize$JIS));
}

$MediaSize* MediaSize$JIS::B0 = nullptr;
$MediaSize* MediaSize$JIS::B1 = nullptr;
$MediaSize* MediaSize$JIS::B2 = nullptr;
$MediaSize* MediaSize$JIS::B3 = nullptr;
$MediaSize* MediaSize$JIS::B4 = nullptr;
$MediaSize* MediaSize$JIS::B5 = nullptr;
$MediaSize* MediaSize$JIS::B6 = nullptr;
$MediaSize* MediaSize$JIS::B7 = nullptr;
$MediaSize* MediaSize$JIS::B8 = nullptr;
$MediaSize* MediaSize$JIS::B9 = nullptr;
$MediaSize* MediaSize$JIS::B10 = nullptr;
$MediaSize* MediaSize$JIS::CHOU_1 = nullptr;
$MediaSize* MediaSize$JIS::CHOU_2 = nullptr;
$MediaSize* MediaSize$JIS::CHOU_3 = nullptr;
$MediaSize* MediaSize$JIS::CHOU_4 = nullptr;
$MediaSize* MediaSize$JIS::CHOU_30 = nullptr;
$MediaSize* MediaSize$JIS::CHOU_40 = nullptr;
$MediaSize* MediaSize$JIS::KAKU_0 = nullptr;
$MediaSize* MediaSize$JIS::KAKU_1 = nullptr;
$MediaSize* MediaSize$JIS::KAKU_2 = nullptr;
$MediaSize* MediaSize$JIS::KAKU_3 = nullptr;
$MediaSize* MediaSize$JIS::KAKU_4 = nullptr;
$MediaSize* MediaSize$JIS::KAKU_5 = nullptr;
$MediaSize* MediaSize$JIS::KAKU_6 = nullptr;
$MediaSize* MediaSize$JIS::KAKU_7 = nullptr;
$MediaSize* MediaSize$JIS::KAKU_8 = nullptr;
$MediaSize* MediaSize$JIS::KAKU_20 = nullptr;
$MediaSize* MediaSize$JIS::KAKU_A4 = nullptr;
$MediaSize* MediaSize$JIS::YOU_1 = nullptr;
$MediaSize* MediaSize$JIS::YOU_2 = nullptr;
$MediaSize* MediaSize$JIS::YOU_3 = nullptr;
$MediaSize* MediaSize$JIS::YOU_4 = nullptr;
$MediaSize* MediaSize$JIS::YOU_5 = nullptr;
$MediaSize* MediaSize$JIS::YOU_6 = nullptr;
$MediaSize* MediaSize$JIS::YOU_7 = nullptr;

void MediaSize$JIS::init$() {
}

void clinit$MediaSize$JIS($Class* class$) {
	$init($MediaSizeName);
	$assignStatic(MediaSize$JIS::B0, $new($MediaSize, 1030, 1456, $Size2DSyntax::MM, $MediaSizeName::JIS_B0));
	$assignStatic(MediaSize$JIS::B1, $new($MediaSize, 728, 1030, $Size2DSyntax::MM, $MediaSizeName::JIS_B1));
	$assignStatic(MediaSize$JIS::B2, $new($MediaSize, 515, 728, $Size2DSyntax::MM, $MediaSizeName::JIS_B2));
	$assignStatic(MediaSize$JIS::B3, $new($MediaSize, 364, 515, $Size2DSyntax::MM, $MediaSizeName::JIS_B3));
	$assignStatic(MediaSize$JIS::B4, $new($MediaSize, 257, 364, $Size2DSyntax::MM, $MediaSizeName::JIS_B4));
	$assignStatic(MediaSize$JIS::B5, $new($MediaSize, 182, 257, $Size2DSyntax::MM, $MediaSizeName::JIS_B5));
	$assignStatic(MediaSize$JIS::B6, $new($MediaSize, 128, 182, $Size2DSyntax::MM, $MediaSizeName::JIS_B6));
	$assignStatic(MediaSize$JIS::B7, $new($MediaSize, 91, 128, $Size2DSyntax::MM, $MediaSizeName::JIS_B7));
	$assignStatic(MediaSize$JIS::B8, $new($MediaSize, 64, 91, $Size2DSyntax::MM, $MediaSizeName::JIS_B8));
	$assignStatic(MediaSize$JIS::B9, $new($MediaSize, 45, 64, $Size2DSyntax::MM, $MediaSizeName::JIS_B9));
	$assignStatic(MediaSize$JIS::B10, $new($MediaSize, 32, 45, $Size2DSyntax::MM, $MediaSizeName::JIS_B10));
	$assignStatic(MediaSize$JIS::CHOU_1, $new($MediaSize, 142, 332, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::CHOU_2, $new($MediaSize, 119, 277, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::CHOU_3, $new($MediaSize, 120, 235, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::CHOU_4, $new($MediaSize, 90, 205, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::CHOU_30, $new($MediaSize, 92, 235, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::CHOU_40, $new($MediaSize, 90, 225, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::KAKU_0, $new($MediaSize, 287, 382, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::KAKU_1, $new($MediaSize, 270, 382, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::KAKU_2, $new($MediaSize, 240, 332, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::KAKU_3, $new($MediaSize, 216, 277, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::KAKU_4, $new($MediaSize, 197, 267, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::KAKU_5, $new($MediaSize, 190, 240, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::KAKU_6, $new($MediaSize, 162, 229, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::KAKU_7, $new($MediaSize, 142, 205, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::KAKU_8, $new($MediaSize, 119, 197, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::KAKU_20, $new($MediaSize, 229, 324, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::KAKU_A4, $new($MediaSize, 228, 312, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::YOU_1, $new($MediaSize, 120, 176, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::YOU_2, $new($MediaSize, 114, 162, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::YOU_3, $new($MediaSize, 98, 148, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::YOU_4, $new($MediaSize, 105, 235, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::YOU_5, $new($MediaSize, 95, 217, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::YOU_6, $new($MediaSize, 98, 190, $Size2DSyntax::MM));
	$assignStatic(MediaSize$JIS::YOU_7, $new($MediaSize, 92, 165, $Size2DSyntax::MM));
}

MediaSize$JIS::MediaSize$JIS() {
}

$Class* MediaSize$JIS::load$($String* name, bool initialize) {
	$loadClass(MediaSize$JIS, name, initialize, &_MediaSize$JIS_ClassInfo_, clinit$MediaSize$JIS, allocate$MediaSize$JIS);
	return class$;
}

$Class* MediaSize$JIS::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax