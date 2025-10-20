#include <javax/swing/plaf/basic/BasicListUI$ListTransferHandler.h>

#include <java/awt/datatransfer/Transferable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <javax/swing/plaf/basic/BasicTransferable.h>
#include <jcpp.h>

#undef COPY

using $Transferable = ::java::awt::datatransfer::Transferable;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $BasicTransferable = ::javax::swing::plaf::basic::BasicTransferable;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicListUI$ListTransferHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicListUI$ListTransferHandler::*)()>(&BasicListUI$ListTransferHandler::init$))},
	{"createTransferable", "(Ljavax/swing/JComponent;)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED},
	{"getSourceActions", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicListUI$ListTransferHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicListUI$ListTransferHandler", "javax.swing.plaf.basic.BasicListUI", "ListTransferHandler", $STATIC},
	{}
};

$ClassInfo _BasicListUI$ListTransferHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicListUI$ListTransferHandler",
	"javax.swing.TransferHandler",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BasicListUI$ListTransferHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicListUI$ListTransferHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicListUI"
};

$Object* allocate$BasicListUI$ListTransferHandler($Class* clazz) {
	return $of($alloc(BasicListUI$ListTransferHandler));
}

int32_t BasicListUI$ListTransferHandler::hashCode() {
	 return this->$TransferHandler::hashCode();
}

bool BasicListUI$ListTransferHandler::equals(Object$* arg0) {
	 return this->$TransferHandler::equals(arg0);
}

$Object* BasicListUI$ListTransferHandler::clone() {
	 return this->$TransferHandler::clone();
}

$String* BasicListUI$ListTransferHandler::toString() {
	 return this->$TransferHandler::toString();
}

void BasicListUI$ListTransferHandler::finalize() {
	this->$TransferHandler::finalize();
}

void BasicListUI$ListTransferHandler::init$() {
	$TransferHandler::init$();
}

$Transferable* BasicListUI$ListTransferHandler::createTransferable($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JList, c)) {
		$var($JList, list, $cast($JList, c));
		$var($ObjectArray, values, $nc(list)->getSelectedValues());
		if (values == nullptr || $nc(values)->length == 0) {
			return nullptr;
		}
		$var($StringBuilder, plainStr, $new($StringBuilder));
		$var($StringBuilder, htmlStr, $new($StringBuilder));
		htmlStr->append("<html>\n<body>\n<ul>\n"_s);
		for (int32_t i = 0; i < $nc(values)->length; ++i) {
			$var($Object0, obj, values->get(i));
			$var($String, val, (obj == nullptr) ? ""_s : $nc($of(obj))->toString());
			plainStr->append(val)->append(u'\n');
			htmlStr->append("  <li>"_s)->append(val)->append(u'\n');
		}
		plainStr->deleteCharAt(plainStr->length() - 1);
		htmlStr->append("</ul>\n</body>\n</html>"_s);
		$var($String, var$0, plainStr->toString());
		return $new($BasicTransferable, var$0, $(htmlStr->toString()));
	}
	return nullptr;
}

int32_t BasicListUI$ListTransferHandler::getSourceActions($JComponent* c) {
	return $TransferHandler::COPY;
}

BasicListUI$ListTransferHandler::BasicListUI$ListTransferHandler() {
}

$Class* BasicListUI$ListTransferHandler::load$($String* name, bool initialize) {
	$loadClass(BasicListUI$ListTransferHandler, name, initialize, &_BasicListUI$ListTransferHandler_ClassInfo_, allocate$BasicListUI$ListTransferHandler);
	return class$;
}

$Class* BasicListUI$ListTransferHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax