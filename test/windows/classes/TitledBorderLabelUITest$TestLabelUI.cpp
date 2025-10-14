#include <TitledBorderLabelUITest$TestLabelUI.h>

#include <TitledBorderLabelUITest.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <javax/swing/plaf/metal/MetalLabelUI.h>
#include <jcpp.h>

using $TitledBorderLabelUITest = ::TitledBorderLabelUITest;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;
using $MetalLabelUI = ::javax::swing::plaf::metal::MetalLabelUI;

$MethodInfo _TitledBorderLabelUITest$TestLabelUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TitledBorderLabelUITest$TestLabelUI::*)()>(&TitledBorderLabelUITest$TestLabelUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&TitledBorderLabelUITest$TestLabelUI::createUI))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TitledBorderLabelUITest$TestLabelUI_InnerClassesInfo_[] = {
	{"TitledBorderLabelUITest$TestLabelUI", "TitledBorderLabelUITest", "TestLabelUI", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _TitledBorderLabelUITest$TestLabelUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TitledBorderLabelUITest$TestLabelUI",
	"javax.swing.plaf.metal.MetalLabelUI",
	"javax.swing.plaf.UIResource",
	nullptr,
	_TitledBorderLabelUITest$TestLabelUI_MethodInfo_,
	nullptr,
	nullptr,
	_TitledBorderLabelUITest$TestLabelUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TitledBorderLabelUITest"
};

$Object* allocate$TitledBorderLabelUITest$TestLabelUI($Class* clazz) {
	return $of($alloc(TitledBorderLabelUITest$TestLabelUI));
}

int32_t TitledBorderLabelUITest$TestLabelUI::hashCode() {
	 return this->$MetalLabelUI::hashCode();
}

bool TitledBorderLabelUITest$TestLabelUI::equals(Object$* arg0) {
	 return this->$MetalLabelUI::equals(arg0);
}

$Object* TitledBorderLabelUITest$TestLabelUI::clone() {
	 return this->$MetalLabelUI::clone();
}

$String* TitledBorderLabelUITest$TestLabelUI::toString() {
	 return this->$MetalLabelUI::toString();
}

void TitledBorderLabelUITest$TestLabelUI::finalize() {
	this->$MetalLabelUI::finalize();
}

void TitledBorderLabelUITest$TestLabelUI::init$() {
	$MetalLabelUI::init$();
}

$ComponentUI* TitledBorderLabelUITest$TestLabelUI::createUI($JComponent* c) {
	$init(TitledBorderLabelUITest$TestLabelUI);
	return $new(TitledBorderLabelUITest$TestLabelUI);
}

void TitledBorderLabelUITest$TestLabelUI::paint($Graphics* g, $JComponent* c) {
	$MetalLabelUI::paint(g, c);
	$throwNew($RuntimeException, "New LabelUI is not installed!"_s);
}

TitledBorderLabelUITest$TestLabelUI::TitledBorderLabelUITest$TestLabelUI() {
}

$Class* TitledBorderLabelUITest$TestLabelUI::load$($String* name, bool initialize) {
	$loadClass(TitledBorderLabelUITest$TestLabelUI, name, initialize, &_TitledBorderLabelUITest$TestLabelUI_ClassInfo_, allocate$TitledBorderLabelUITest$TestLabelUI);
	return class$;
}

$Class* TitledBorderLabelUITest$TestLabelUI::class$ = nullptr;