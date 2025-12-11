#include <java/awt/dnd/DragSourceContext$1.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/awt/dnd/DragSourceContext.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $DragSourceContext = ::java::awt::dnd::DragSourceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$FieldInfo _DragSourceContext$1_FieldInfo_[] = {
	{"this$0", "Ljava/awt/dnd/DragSourceContext;", nullptr, $FINAL | $SYNTHETIC, $field(DragSourceContext$1, this$0)},
	{}
};

$MethodInfo _DragSourceContext$1_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragSourceContext;)V", nullptr, 0, $method(static_cast<void(DragSourceContext$1::*)($DragSourceContext*)>(&DragSourceContext$1::init$))},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.awt.datatransfer.UnsupportedFlavorException"},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DragSourceContext$1_EnclosingMethodInfo_ = {
	"java.awt.dnd.DragSourceContext",
	"readObject",
	"(Ljava/io/ObjectInputStream;)V"
};

$InnerClassInfo _DragSourceContext$1_InnerClassesInfo_[] = {
	{"java.awt.dnd.DragSourceContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DragSourceContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.dnd.DragSourceContext$1",
	"java.lang.Object",
	"java.awt.datatransfer.Transferable",
	_DragSourceContext$1_FieldInfo_,
	_DragSourceContext$1_MethodInfo_,
	nullptr,
	&_DragSourceContext$1_EnclosingMethodInfo_,
	_DragSourceContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.dnd.DragSourceContext"
};

$Object* allocate$DragSourceContext$1($Class* clazz) {
	return $of($alloc(DragSourceContext$1));
}

void DragSourceContext$1::init$($DragSourceContext* this$0) {
	$set(this, this$0, this$0);
}

$DataFlavorArray* DragSourceContext$1::getTransferDataFlavors() {
	return $new($DataFlavorArray, 0);
}

bool DragSourceContext$1::isDataFlavorSupported($DataFlavor* flavor) {
	return false;
}

$Object* DragSourceContext$1::getTransferData($DataFlavor* flavor) {
	$throwNew($UnsupportedFlavorException, flavor);
	$shouldNotReachHere();
}

DragSourceContext$1::DragSourceContext$1() {
}

$Class* DragSourceContext$1::load$($String* name, bool initialize) {
	$loadClass(DragSourceContext$1, name, initialize, &_DragSourceContext$1_ClassInfo_, allocate$DragSourceContext$1);
	return class$;
}

$Class* DragSourceContext$1::class$ = nullptr;

		} // dnd
	} // awt
} // java