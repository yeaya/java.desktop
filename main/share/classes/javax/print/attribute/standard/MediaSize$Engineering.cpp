#include <javax/print/attribute/standard/MediaSize$Engineering.h>

#include <javax/print/attribute/Size2DSyntax.h>
#include <javax/print/attribute/standard/MediaSize.h>
#include <javax/print/attribute/standard/MediaSizeName.h>
#include <jcpp.h>

#undef A
#undef B
#undef C
#undef D
#undef E
#undef INCH

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Size2DSyntax = ::javax::print::attribute::Size2DSyntax;
using $MediaSize = ::javax::print::attribute::standard::MediaSize;
using $MediaSizeName = ::javax::print::attribute::standard::MediaSizeName;

namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {

$FieldInfo _MediaSize$Engineering_FieldInfo_[] = {
	{"A", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Engineering, A)},
	{"B", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Engineering, B)},
	{"C", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Engineering, C)},
	{"D", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Engineering, D)},
	{"E", "Ljavax/print/attribute/standard/MediaSize;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MediaSize$Engineering, E)},
	{}
};

$MethodInfo _MediaSize$Engineering_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MediaSize$Engineering::*)()>(&MediaSize$Engineering::init$))},
	{}
};

$InnerClassInfo _MediaSize$Engineering_InnerClassesInfo_[] = {
	{"javax.print.attribute.standard.MediaSize$Engineering", "javax.print.attribute.standard.MediaSize", "Engineering", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _MediaSize$Engineering_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.attribute.standard.MediaSize$Engineering",
	"java.lang.Object",
	nullptr,
	_MediaSize$Engineering_FieldInfo_,
	_MediaSize$Engineering_MethodInfo_,
	nullptr,
	nullptr,
	_MediaSize$Engineering_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.attribute.standard.MediaSize"
};

$Object* allocate$MediaSize$Engineering($Class* clazz) {
	return $of($alloc(MediaSize$Engineering));
}

$MediaSize* MediaSize$Engineering::A = nullptr;
$MediaSize* MediaSize$Engineering::B = nullptr;
$MediaSize* MediaSize$Engineering::C = nullptr;
$MediaSize* MediaSize$Engineering::D = nullptr;
$MediaSize* MediaSize$Engineering::E = nullptr;

void MediaSize$Engineering::init$() {
}

void clinit$MediaSize$Engineering($Class* class$) {
	$init($MediaSizeName);
	$assignStatic(MediaSize$Engineering::A, $new($MediaSize, 8.5f, 11.0f, $Size2DSyntax::INCH, $MediaSizeName::A));
	$assignStatic(MediaSize$Engineering::B, $new($MediaSize, 11.0f, 17.0f, $Size2DSyntax::INCH, $MediaSizeName::B));
	$assignStatic(MediaSize$Engineering::C, $new($MediaSize, 17.0f, 22.0f, $Size2DSyntax::INCH, $MediaSizeName::C));
	$assignStatic(MediaSize$Engineering::D, $new($MediaSize, 22.0f, 34.0f, $Size2DSyntax::INCH, $MediaSizeName::D));
	$assignStatic(MediaSize$Engineering::E, $new($MediaSize, 34.0f, 44.0f, $Size2DSyntax::INCH, $MediaSizeName::E));
}

MediaSize$Engineering::MediaSize$Engineering() {
}

$Class* MediaSize$Engineering::load$($String* name, bool initialize) {
	$loadClass(MediaSize$Engineering, name, initialize, &_MediaSize$Engineering_ClassInfo_, clinit$MediaSize$Engineering, allocate$MediaSize$Engineering);
	return class$;
}

$Class* MediaSize$Engineering::class$ = nullptr;

			} // standard
		} // attribute
	} // print
} // javax