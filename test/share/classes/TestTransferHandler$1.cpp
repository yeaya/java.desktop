#include <TestTransferHandler$1.h>

#include <TestTransferHandler$UserJComponent.h>
#include <TestTransferHandler.h>
#include <java/awt/Color.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <jcpp.h>

#undef TEST_COLOR

using $TestTransferHandler = ::TestTransferHandler;
using $TestTransferHandler$UserJComponent = ::TestTransferHandler$UserJComponent;
using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $Color = ::java::awt::Color;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _TestTransferHandler$1_FieldInfo_[] = {
	{"val$colorFlavor", "Ljava/awt/datatransfer/DataFlavor;", nullptr, $FINAL | $SYNTHETIC, $field(TestTransferHandler$1, val$colorFlavor)},
	{}
};

$MethodInfo _TestTransferHandler$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/datatransfer/DataFlavor;)V", "()V", 0, $method(static_cast<void(TestTransferHandler$1::*)($DataFlavor*)>(&TestTransferHandler$1::init$))},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestTransferHandler$1_EnclosingMethodInfo_ = {
	"TestTransferHandler",
	"testTransferHandler",
	"()V"
};

$InnerClassInfo _TestTransferHandler$1_InnerClassesInfo_[] = {
	{"TestTransferHandler$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestTransferHandler$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestTransferHandler$1",
	"java.lang.Object",
	"java.awt.datatransfer.Transferable",
	_TestTransferHandler$1_FieldInfo_,
	_TestTransferHandler$1_MethodInfo_,
	nullptr,
	&_TestTransferHandler$1_EnclosingMethodInfo_,
	_TestTransferHandler$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestTransferHandler"
};

$Object* allocate$TestTransferHandler$1($Class* clazz) {
	return $of($alloc(TestTransferHandler$1));
}

void TestTransferHandler$1::init$($DataFlavor* val$colorFlavor) {
	$set(this, val$colorFlavor, val$colorFlavor);
}

$DataFlavorArray* TestTransferHandler$1::getTransferDataFlavors() {
	return $new($DataFlavorArray, {this->val$colorFlavor});
}

bool TestTransferHandler$1::isDataFlavorSupported($DataFlavor* flavor) {
	return true;
}

$Object* TestTransferHandler$1::getTransferData($DataFlavor* flavor) {
	$init($TestTransferHandler$UserJComponent);
	return $of($TestTransferHandler$UserJComponent::TEST_COLOR);
}

TestTransferHandler$1::TestTransferHandler$1() {
}

$Class* TestTransferHandler$1::load$($String* name, bool initialize) {
	$loadClass(TestTransferHandler$1, name, initialize, &_TestTransferHandler$1_ClassInfo_, allocate$TestTransferHandler$1);
	return class$;
}

$Class* TestTransferHandler$1::class$ = nullptr;