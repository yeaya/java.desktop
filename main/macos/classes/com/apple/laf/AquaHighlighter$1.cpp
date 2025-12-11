#include <com/apple/laf/AquaHighlighter$1.h>

#include <com/apple/laf/AquaHighlighter$AquaHighlightPainter.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Color.h>
#include <jcpp.h>

using $AquaHighlighter$AquaHighlightPainter = ::com::apple::laf::AquaHighlighter$AquaHighlightPainter;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaHighlighter$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaHighlighter$1::*)()>(&AquaHighlighter$1::init$))},
	{"getInstance", "()Ljavax/swing/text/LayeredHighlighter$LayerPainter;", nullptr, $PROTECTED},
	{}
};

$EnclosingMethodInfo _AquaHighlighter$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaHighlighter",
	nullptr,
	nullptr
};

$InnerClassInfo _AquaHighlighter$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaHighlighter$1", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$RecyclableSingleton", "com.apple.laf.AquaUtils", "RecyclableSingleton", $STATIC | $ABSTRACT},
	{"javax.swing.text.LayeredHighlighter$LayerPainter", "javax.swing.text.LayeredHighlighter", "LayerPainter", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaHighlighter$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaHighlighter$1",
	"com.apple.laf.AquaUtils$RecyclableSingleton",
	nullptr,
	nullptr,
	_AquaHighlighter$1_MethodInfo_,
	"Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/text/LayeredHighlighter$LayerPainter;>;",
	&_AquaHighlighter$1_EnclosingMethodInfo_,
	_AquaHighlighter$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaHighlighter"
};

$Object* allocate$AquaHighlighter$1($Class* clazz) {
	return $of($alloc(AquaHighlighter$1));
}

void AquaHighlighter$1::init$() {
	$AquaUtils$RecyclableSingleton::init$();
}

$Object* AquaHighlighter$1::getInstance() {
	return $of($new($AquaHighlighter$AquaHighlightPainter, nullptr));
}

AquaHighlighter$1::AquaHighlighter$1() {
}

$Class* AquaHighlighter$1::load$($String* name, bool initialize) {
	$loadClass(AquaHighlighter$1, name, initialize, &_AquaHighlighter$1_ClassInfo_, allocate$AquaHighlighter$1);
	return class$;
}

$Class* AquaHighlighter$1::class$ = nullptr;

		} // laf
	} // apple
} // com