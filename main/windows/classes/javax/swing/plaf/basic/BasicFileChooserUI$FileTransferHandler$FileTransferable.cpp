#include <javax/swing/plaf/basic/BasicFileChooserUI$FileTransferHandler$FileTransferable.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI$FileTransferHandler.h>
#include <javax/swing/plaf/basic/BasicTransferable.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $BasicFileChooserUI$FileTransferHandler = ::javax::swing::plaf::basic::BasicFileChooserUI$FileTransferHandler;
using $BasicTransferable = ::javax::swing::plaf::basic::BasicTransferable;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicFileChooserUI$FileTransferHandler$FileTransferable_FieldInfo_[] = {
	{"fileData", "[Ljava/lang/Object;", nullptr, 0, $field(BasicFileChooserUI$FileTransferHandler$FileTransferable, fileData)},
	{}
};

$MethodInfo _BasicFileChooserUI$FileTransferHandler$FileTransferable_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(BasicFileChooserUI$FileTransferHandler$FileTransferable::*)($String*,$String*,$ObjectArray*)>(&BasicFileChooserUI$FileTransferHandler$FileTransferable::init$))},
	{"getRicherData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getRicherFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicFileChooserUI$FileTransferHandler$FileTransferable_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler", "javax.swing.plaf.basic.BasicFileChooserUI", "FileTransferHandler", $STATIC},
	{"javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler$FileTransferable", "javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler", "FileTransferable", $STATIC},
	{}
};

$ClassInfo _BasicFileChooserUI$FileTransferHandler$FileTransferable_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicFileChooserUI$FileTransferHandler$FileTransferable",
	"javax.swing.plaf.basic.BasicTransferable",
	nullptr,
	_BasicFileChooserUI$FileTransferHandler$FileTransferable_FieldInfo_,
	_BasicFileChooserUI$FileTransferHandler$FileTransferable_MethodInfo_,
	nullptr,
	nullptr,
	_BasicFileChooserUI$FileTransferHandler$FileTransferable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicFileChooserUI"
};

$Object* allocate$BasicFileChooserUI$FileTransferHandler$FileTransferable($Class* clazz) {
	return $of($alloc(BasicFileChooserUI$FileTransferHandler$FileTransferable));
}

void BasicFileChooserUI$FileTransferHandler$FileTransferable::init$($String* plainData, $String* htmlData, $ObjectArray* fileData) {
	$BasicTransferable::init$(plainData, htmlData);
	$set(this, fileData, fileData);
}

$DataFlavorArray* BasicFileChooserUI$FileTransferHandler$FileTransferable::getRicherFlavors() {
	$var($DataFlavorArray, flavors, $new($DataFlavorArray, 1));
	$init($DataFlavor);
	flavors->set(0, $DataFlavor::javaFileListFlavor);
	return flavors;
}

$Object* BasicFileChooserUI$FileTransferHandler$FileTransferable::getRicherData($DataFlavor* flavor) {
	$init($DataFlavor);
	if ($nc($DataFlavor::javaFileListFlavor)->equals(flavor)) {
		$var($ArrayList, files, $new($ArrayList));
		{
			$var($ObjectArray, arr$, this->fileData);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Object0, file, arr$->get(i$));
				{
					files->add(file);
				}
			}
		}
		return $of(files);
	}
	return $of(nullptr);
}

BasicFileChooserUI$FileTransferHandler$FileTransferable::BasicFileChooserUI$FileTransferHandler$FileTransferable() {
}

$Class* BasicFileChooserUI$FileTransferHandler$FileTransferable::load$($String* name, bool initialize) {
	$loadClass(BasicFileChooserUI$FileTransferHandler$FileTransferable, name, initialize, &_BasicFileChooserUI$FileTransferHandler$FileTransferable_ClassInfo_, allocate$BasicFileChooserUI$FileTransferHandler$FileTransferable);
	return class$;
}

$Class* BasicFileChooserUI$FileTransferHandler$FileTransferable::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax