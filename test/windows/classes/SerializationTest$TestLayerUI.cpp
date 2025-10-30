#include <SerializationTest$TestLayerUI.h>

#include <SerializationTest.h>
#include <javax/swing/plaf/LayerUI.h>
#include <jcpp.h>

using $SerializationTest = ::SerializationTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LayerUI = ::javax::swing::plaf::LayerUI;

$MethodInfo _SerializationTest$TestLayerUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SerializationTest$TestLayerUI::*)()>(&SerializationTest$TestLayerUI::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SerializationTest$TestLayerUI_InnerClassesInfo_[] = {
	{"SerializationTest$TestLayerUI", "SerializationTest", "TestLayerUI", $STATIC},
	{}
};

$ClassInfo _SerializationTest$TestLayerUI_ClassInfo_ = {
	$ACC_SUPER,
	"SerializationTest$TestLayerUI",
	"javax.swing.plaf.LayerUI",
	nullptr,
	nullptr,
	_SerializationTest$TestLayerUI_MethodInfo_,
	"<V:Ljavax/swing/JComponent;>Ljavax/swing/plaf/LayerUI<TV;>;",
	nullptr,
	_SerializationTest$TestLayerUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"SerializationTest"
};

$Object* allocate$SerializationTest$TestLayerUI($Class* clazz) {
	return $of($alloc(SerializationTest$TestLayerUI));
}

void SerializationTest$TestLayerUI::init$() {
	$LayerUI::init$();
}

$String* SerializationTest$TestLayerUI::toString() {
	return "TestLayerUI"_s;
}

SerializationTest$TestLayerUI::SerializationTest$TestLayerUI() {
}

$Class* SerializationTest$TestLayerUI::load$($String* name, bool initialize) {
	$loadClass(SerializationTest$TestLayerUI, name, initialize, &_SerializationTest$TestLayerUI_ClassInfo_, allocate$SerializationTest$TestLayerUI);
	return class$;
}

$Class* SerializationTest$TestLayerUI::class$ = nullptr;