#include <com/apple/laf/AquaHighlighter.h>

#include <com/apple/laf/AquaHighlighter$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <javax/swing/text/DefaultHighlighter.h>
#include <javax/swing/text/LayeredHighlighter$LayerPainter.h>
#include <jcpp.h>

using $AquaHighlighter$1 = ::com::apple::laf::AquaHighlighter$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultHighlighter = ::javax::swing::text::DefaultHighlighter;
using $LayeredHighlighter$LayerPainter = ::javax::swing::text::LayeredHighlighter$LayerPainter;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaHighlighter_FieldInfo_[] = {
	{"instance", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/text/LayeredHighlighter$LayerPainter;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaHighlighter, instance)},
	{}
};

$MethodInfo _AquaHighlighter_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaHighlighter::*)()>(&AquaHighlighter::init$))},
	{"getInstance", "()Ljavax/swing/text/LayeredHighlighter$LayerPainter;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$LayeredHighlighter$LayerPainter*(*)()>(&AquaHighlighter::getInstance))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaHighlighter_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaHighlighter$AquaHighlightPainter", "com.apple.laf.AquaHighlighter", "AquaHighlightPainter", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaHighlighter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaHighlighter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaHighlighter",
	"javax.swing.text.DefaultHighlighter",
	"javax.swing.plaf.UIResource",
	_AquaHighlighter_FieldInfo_,
	_AquaHighlighter_MethodInfo_,
	nullptr,
	nullptr,
	_AquaHighlighter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaHighlighter$AquaHighlightPainter,com.apple.laf.AquaHighlighter$1"
};

$Object* allocate$AquaHighlighter($Class* clazz) {
	return $of($alloc(AquaHighlighter));
}

int32_t AquaHighlighter::hashCode() {
	 return this->$DefaultHighlighter::hashCode();
}

bool AquaHighlighter::equals(Object$* arg0) {
	 return this->$DefaultHighlighter::equals(arg0);
}

$Object* AquaHighlighter::clone() {
	 return this->$DefaultHighlighter::clone();
}

$String* AquaHighlighter::toString() {
	 return this->$DefaultHighlighter::toString();
}

void AquaHighlighter::finalize() {
	this->$DefaultHighlighter::finalize();
}

$AquaUtils$RecyclableSingleton* AquaHighlighter::instance = nullptr;

void AquaHighlighter::init$() {
	$DefaultHighlighter::init$();
}

$LayeredHighlighter$LayerPainter* AquaHighlighter::getInstance() {
	$init(AquaHighlighter);
	return $cast($LayeredHighlighter$LayerPainter, $nc(AquaHighlighter::instance)->get());
}

void clinit$AquaHighlighter($Class* class$) {
	$assignStatic(AquaHighlighter::instance, $new($AquaHighlighter$1));
}

AquaHighlighter::AquaHighlighter() {
}

$Class* AquaHighlighter::load$($String* name, bool initialize) {
	$loadClass(AquaHighlighter, name, initialize, &_AquaHighlighter_ClassInfo_, clinit$AquaHighlighter, allocate$AquaHighlighter);
	return class$;
}

$Class* AquaHighlighter::class$ = nullptr;

		} // laf
	} // apple
} // com