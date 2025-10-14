#include <javax/swing/text/JTextComponent$DefaultTransferHandler.h>

#include <java/awt/Component.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/ClipboardOwner.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/StringSelection.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/awt/im/InputContext.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef MOVE
#undef NONE

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $Component = ::java::awt::Component;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $ClipboardOwner = ::java::awt::datatransfer::ClipboardOwner;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $StringSelection = ::java::awt::datatransfer::StringSelection;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $InputContext = ::java::awt::im::InputContext;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _JTextComponent$DefaultTransferHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JTextComponent$DefaultTransferHandler::*)()>(&JTextComponent$DefaultTransferHandler::init$))},
	{"canImport", "(Ljavax/swing/JComponent;[Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{"exportToClipboard", "(Ljavax/swing/JComponent;Ljava/awt/datatransfer/Clipboard;I)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalStateException"},
	{"getFlavor", "([Ljava/awt/datatransfer/DataFlavor;)Ljava/awt/datatransfer/DataFlavor;", nullptr, $PRIVATE, $method(static_cast<$DataFlavor*(JTextComponent$DefaultTransferHandler::*)($DataFlavorArray*)>(&JTextComponent$DefaultTransferHandler::getFlavor))},
	{"getSourceActions", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"importData", "(Ljavax/swing/JComponent;Ljava/awt/datatransfer/Transferable;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTextComponent$DefaultTransferHandler_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$DefaultTransferHandler", "javax.swing.text.JTextComponent", "DefaultTransferHandler", $STATIC},
	{}
};

$ClassInfo _JTextComponent$DefaultTransferHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$DefaultTransferHandler",
	"javax.swing.TransferHandler",
	"javax.swing.plaf.UIResource",
	nullptr,
	_JTextComponent$DefaultTransferHandler_MethodInfo_,
	nullptr,
	nullptr,
	_JTextComponent$DefaultTransferHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$DefaultTransferHandler($Class* clazz) {
	return $of($alloc(JTextComponent$DefaultTransferHandler));
}

int32_t JTextComponent$DefaultTransferHandler::hashCode() {
	 return this->$TransferHandler::hashCode();
}

bool JTextComponent$DefaultTransferHandler::equals(Object$* arg0) {
	 return this->$TransferHandler::equals(arg0);
}

$Object* JTextComponent$DefaultTransferHandler::clone() {
	 return this->$TransferHandler::clone();
}

$String* JTextComponent$DefaultTransferHandler::toString() {
	 return this->$TransferHandler::toString();
}

void JTextComponent$DefaultTransferHandler::finalize() {
	this->$TransferHandler::finalize();
}

void JTextComponent$DefaultTransferHandler::init$() {
	$TransferHandler::init$();
}

void JTextComponent$DefaultTransferHandler::exportToClipboard($JComponent* comp, $Clipboard* clipboard, int32_t action) {
	if ($instanceOf($JTextComponent, comp)) {
		$var($JTextComponent, text, $cast($JTextComponent, comp));
		int32_t p0 = $nc(text)->getSelectionStart();
		int32_t p1 = text->getSelectionEnd();
		if (p0 != p1) {
			try {
				$var($Document, doc, text->getDocument());
				$var($String, srcData, $nc(doc)->getText(p0, p1 - p0));
				$var($StringSelection, contents, $new($StringSelection, srcData));
				$nc(clipboard)->setContents(contents, nullptr);
				if (action == $TransferHandler::MOVE) {
					doc->remove(p0, p1 - p0);
				}
			} catch ($BadLocationException&) {
				$catch();
			}
		}
	}
}

bool JTextComponent$DefaultTransferHandler::importData($JComponent* comp, $Transferable* t) {
	if ($instanceOf($JTextComponent, comp)) {
		$var($DataFlavor, flavor, getFlavor($($nc(t)->getTransferDataFlavors())));
		if (flavor != nullptr) {
			$var($InputContext, ic, $nc(comp)->getInputContext());
			if (ic != nullptr) {
				ic->endComposition();
			}
			try {
				$var($String, data, $cast($String, $nc(t)->getTransferData(flavor)));
				$nc(($cast($JTextComponent, comp)))->replaceSelection(data);
				return true;
			} catch ($UnsupportedFlavorException&) {
				$catch();
			} catch ($IOException&) {
				$catch();
			}
		}
	}
	return false;
}

bool JTextComponent$DefaultTransferHandler::canImport($JComponent* comp, $DataFlavorArray* transferFlavors) {
	$var($JTextComponent, c, $cast($JTextComponent, comp));
	bool var$0 = $nc(c)->isEditable();
	if (!(var$0 && c->isEnabled())) {
		return false;
	}
	return (getFlavor(transferFlavors) != nullptr);
}

int32_t JTextComponent$DefaultTransferHandler::getSourceActions($JComponent* c) {
	return $TransferHandler::NONE;
}

$DataFlavor* JTextComponent$DefaultTransferHandler::getFlavor($DataFlavorArray* flavors) {
	if (flavors != nullptr) {
		{
			$var($DataFlavorArray, arr$, flavors);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($DataFlavor, flavor, arr$->get(i$));
				{
					$init($DataFlavor);
					if ($nc(flavor)->equals($DataFlavor::stringFlavor)) {
						return flavor;
					}
				}
			}
		}
	}
	return nullptr;
}

JTextComponent$DefaultTransferHandler::JTextComponent$DefaultTransferHandler() {
}

$Class* JTextComponent$DefaultTransferHandler::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$DefaultTransferHandler, name, initialize, &_JTextComponent$DefaultTransferHandler_ClassInfo_, allocate$JTextComponent$DefaultTransferHandler);
	return class$;
}

$Class* JTextComponent$DefaultTransferHandler::class$ = nullptr;

		} // text
	} // swing
} // javax