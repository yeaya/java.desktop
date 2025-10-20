#include <javax/swing/plaf/basic/BasicTextUI$TextTransferHandler.h>

#include <java/awt/Component.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/awt/im/InputContext.h>
#include <java/io/IOException.h>
#include <java/io/Reader.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/TransferHandler$TransferSupport.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicTextUI$TextTransferHandler$TextTransferable.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/basic/BasicTransferable.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent$DropLocation.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

#undef COPY
#undef COPY_OR_MOVE
#undef INSERT
#undef MOVE
#undef NONE
#undef TRUE

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $Component = ::java::awt::Component;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $InputContext = ::java::awt::im::InputContext;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DropMode = ::javax::swing::DropMode;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JPasswordField = ::javax::swing::JPasswordField;
using $TransferHandler = ::javax::swing::TransferHandler;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $TransferHandler$TransferSupport = ::javax::swing::TransferHandler$TransferSupport;
using $TextUI = ::javax::swing::plaf::TextUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $BasicTextUI$TextTransferHandler$TextTransferable = ::javax::swing::plaf::basic::BasicTextUI$TextTransferHandler$TextTransferable;
using $BasicTransferable = ::javax::swing::plaf::basic::BasicTransferable;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $JTextComponent$DropLocation = ::javax::swing::text::JTextComponent$DropLocation;
using $Position$Bias = ::javax::swing::text::Position$Bias;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTextUI$TextTransferHandler_FieldInfo_[] = {
	{"exportComp", "Ljavax/swing/text/JTextComponent;", nullptr, $PRIVATE, $field(BasicTextUI$TextTransferHandler, exportComp)},
	{"shouldRemove", "Z", nullptr, $PRIVATE, $field(BasicTextUI$TextTransferHandler, shouldRemove)},
	{"p0", "I", nullptr, $PRIVATE, $field(BasicTextUI$TextTransferHandler, p0)},
	{"p1", "I", nullptr, $PRIVATE, $field(BasicTextUI$TextTransferHandler, p1)},
	{"modeBetween", "Z", nullptr, $PRIVATE, $field(BasicTextUI$TextTransferHandler, modeBetween)},
	{"isDrop", "Z", nullptr, $PRIVATE, $field(BasicTextUI$TextTransferHandler, isDrop)},
	{"dropAction", "I", nullptr, $PRIVATE, $field(BasicTextUI$TextTransferHandler, dropAction)},
	{"dropBias", "Ljavax/swing/text/Position$Bias;", nullptr, $PRIVATE, $field(BasicTextUI$TextTransferHandler, dropBias)},
	{}
};

$MethodInfo _BasicTextUI$TextTransferHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicTextUI$TextTransferHandler::*)()>(&BasicTextUI$TextTransferHandler::init$))},
	{"canImport", "(Ljavax/swing/JComponent;[Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{"createTransferable", "(Ljavax/swing/JComponent;)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED},
	{"exportDone", "(Ljavax/swing/JComponent;Ljava/awt/datatransfer/Transferable;I)V", nullptr, $PROTECTED},
	{"getImportFlavor", "([Ljava/awt/datatransfer/DataFlavor;Ljavax/swing/text/JTextComponent;)Ljava/awt/datatransfer/DataFlavor;", nullptr, $PROTECTED},
	{"getSourceActions", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"handleReaderImport", "(Ljava/io/Reader;Ljavax/swing/text/JTextComponent;Z)V", nullptr, $PROTECTED, nullptr, "javax.swing.text.BadLocationException,java.io.IOException"},
	{"importData", "(Ljavax/swing/TransferHandler$TransferSupport;)Z", nullptr, $PUBLIC},
	{"importData", "(Ljavax/swing/JComponent;Ljava/awt/datatransfer/Transferable;)Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextUI$TextTransferHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextUI$TextTransferHandler", "javax.swing.plaf.basic.BasicTextUI", "TextTransferHandler", $STATIC},
	{"javax.swing.plaf.basic.BasicTextUI$TextTransferHandler$TextTransferable", "javax.swing.plaf.basic.BasicTextUI$TextTransferHandler", "TextTransferable", $STATIC},
	{}
};

$ClassInfo _BasicTextUI$TextTransferHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextUI$TextTransferHandler",
	"javax.swing.TransferHandler",
	"javax.swing.plaf.UIResource",
	_BasicTextUI$TextTransferHandler_FieldInfo_,
	_BasicTextUI$TextTransferHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextUI$TextTransferHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextUI"
};

$Object* allocate$BasicTextUI$TextTransferHandler($Class* clazz) {
	return $of($alloc(BasicTextUI$TextTransferHandler));
}

int32_t BasicTextUI$TextTransferHandler::hashCode() {
	 return this->$TransferHandler::hashCode();
}

bool BasicTextUI$TextTransferHandler::equals(Object$* arg0) {
	 return this->$TransferHandler::equals(arg0);
}

$Object* BasicTextUI$TextTransferHandler::clone() {
	 return this->$TransferHandler::clone();
}

$String* BasicTextUI$TextTransferHandler::toString() {
	 return this->$TransferHandler::toString();
}

void BasicTextUI$TextTransferHandler::finalize() {
	this->$TransferHandler::finalize();
}

void BasicTextUI$TextTransferHandler::init$() {
	$TransferHandler::init$();
	this->modeBetween = false;
	this->isDrop = false;
	this->dropAction = $TransferHandler::MOVE;
}

$DataFlavor* BasicTextUI$TextTransferHandler::getImportFlavor($DataFlavorArray* flavors, $JTextComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($DataFlavor, plainFlavor, nullptr);
	$var($DataFlavor, refFlavor, nullptr);
	$var($DataFlavor, stringFlavor, nullptr);
	if ($instanceOf($JEditorPane, c)) {
		for (int32_t i = 0; i < $nc(flavors)->length; ++i) {
			$var($String, mime, $nc(flavors->get(i))->getMimeType());
			if ($nc(mime)->startsWith($($nc($($nc(($cast($JEditorPane, c)))->getEditorKit()))->getContentType()))) {
				return flavors->get(i);
			} else if (plainFlavor == nullptr && mime->startsWith("text/plain"_s)) {
				$assign(plainFlavor, flavors->get(i));
			} else {
				bool var$1 = refFlavor == nullptr && mime->startsWith("application/x-java-jvm-local-objectref"_s);
				if (var$1 && $nc(flavors->get(i))->getRepresentationClass() == $String::class$) {
					$assign(refFlavor, flavors->get(i));
				} else {
					if (stringFlavor == nullptr && $nc(flavors->get(i))->equals($DataFlavor::stringFlavor)) {
						$assign(stringFlavor, flavors->get(i));
					}
				}
			}
		}
		if (plainFlavor != nullptr) {
			return plainFlavor;
		} else if (refFlavor != nullptr) {
			return refFlavor;
		} else if (stringFlavor != nullptr) {
			return stringFlavor;
		}
		return nullptr;
	}
	for (int32_t i = 0; i < $nc(flavors)->length; ++i) {
		$var($String, mime, $nc(flavors->get(i))->getMimeType());
		if ($nc(mime)->startsWith("text/plain"_s)) {
			return flavors->get(i);
		} else {
			bool var$3 = refFlavor == nullptr && mime->startsWith("application/x-java-jvm-local-objectref"_s);
			if (var$3 && $nc(flavors->get(i))->getRepresentationClass() == $String::class$) {
				$assign(refFlavor, flavors->get(i));
			} else {
				if (stringFlavor == nullptr && $nc(flavors->get(i))->equals($DataFlavor::stringFlavor)) {
					$assign(stringFlavor, flavors->get(i));
				}
			}
		}
	}
	if (refFlavor != nullptr) {
		return refFlavor;
	} else if (stringFlavor != nullptr) {
		return stringFlavor;
	}
	return nullptr;
}

void BasicTextUI$TextTransferHandler::handleReaderImport($Reader* in, $JTextComponent* c, bool useRead) {
	$useLocalCurrentObjectStackCache();
	if (useRead) {
		int32_t startPosition = $nc(c)->getSelectionStart();
		int32_t endPosition = c->getSelectionEnd();
		int32_t length = endPosition - startPosition;
		$var($EditorKit, kit, $nc($($cast($TextUI, c->getUI())))->getEditorKit(c));
		$var($Document, doc, c->getDocument());
		if (length > 0) {
			$nc(doc)->remove(startPosition, length);
		}
		$nc(kit)->read(in, doc, startPosition);
	} else {
		$var($chars, buff, $new($chars, 1024));
		int32_t nch = 0;
		bool lastWasCR = false;
		int32_t last = 0;
		$var($StringBuilder, sbuff, nullptr);
		while ((nch = $nc(in)->read(buff, 0, buff->length)) != -1) {
			if (sbuff == nullptr) {
				$assign(sbuff, $new($StringBuilder, nch));
			}
			last = 0;
			for (int32_t counter = 0; counter < nch; ++counter) {
				switch (buff->get(counter)) {
				case u'\r':
					{
						if (lastWasCR) {
							if (counter == 0) {
								$nc(sbuff)->append(u'\n');
							} else {
								buff->set(counter - 1, u'\n');
							}
						} else {
							lastWasCR = true;
						}
						break;
					}
				case u'\n':
					{
						if (lastWasCR) {
							if (counter > (last + 1)) {
								$nc(sbuff)->append(buff, last, counter - last - 1);
							}
							lastWasCR = false;
							last = counter;
						}
						break;
					}
				default:
					{
						if (lastWasCR) {
							if (counter == 0) {
								$nc(sbuff)->append(u'\n');
							} else {
								buff->set(counter - 1, u'\n');
							}
							lastWasCR = false;
						}
						break;
					}
				}
			}
			if (last < nch) {
				if (lastWasCR) {
					if (last < (nch - 1)) {
						$nc(sbuff)->append(buff, last, nch - last - 1);
					}
				} else {
					$nc(sbuff)->append(buff, last, nch - last);
				}
			}
		}
		if (lastWasCR) {
			$nc(sbuff)->append(u'\n');
		}
		$nc(c)->replaceSelection(sbuff != nullptr ? $($nc(sbuff)->toString()) : ""_s);
	}
}

int32_t BasicTextUI$TextTransferHandler::getSourceActions($JComponent* c) {
	$init($Boolean);
	if ($instanceOf($JPasswordField, c) && !$equals($nc(c)->getClientProperty("JPasswordField.cutCopyAllowed"_s), $Boolean::TRUE)) {
		return $TransferHandler::NONE;
	}
	return $nc(($cast($JTextComponent, c)))->isEditable() ? $TransferHandler::COPY_OR_MOVE : $TransferHandler::COPY;
}

$Transferable* BasicTextUI$TextTransferHandler::createTransferable($JComponent* comp) {
	$set(this, exportComp, $cast($JTextComponent, comp));
	this->shouldRemove = true;
	this->p0 = $nc(this->exportComp)->getSelectionStart();
	this->p1 = $nc(this->exportComp)->getSelectionEnd();
	return (this->p0 != this->p1) ? (static_cast<$Transferable*>($new($BasicTextUI$TextTransferHandler$TextTransferable, this->exportComp, this->p0, this->p1))) : ($Transferable*)nullptr;
}

void BasicTextUI$TextTransferHandler::exportDone($JComponent* source, $Transferable* data, int32_t action) {
	if (this->shouldRemove && action == $TransferHandler::MOVE) {
		$var($BasicTextUI$TextTransferHandler$TextTransferable, t, $cast($BasicTextUI$TextTransferHandler$TextTransferable, data));
		$nc(t)->removeText();
	}
	$set(this, exportComp, nullptr);
}

bool BasicTextUI$TextTransferHandler::importData($TransferHandler$TransferSupport* support) {
	$useLocalCurrentObjectStackCache();
	this->isDrop = $nc(support)->isDrop();
	if (this->isDrop) {
		$init($DropMode);
		this->modeBetween = $nc(($cast($JTextComponent, $(support->getComponent()))))->getDropMode() == $DropMode::INSERT;
		$set(this, dropBias, $nc(($cast($JTextComponent$DropLocation, $(support->getDropLocation()))))->getBias());
		this->dropAction = support->getDropAction();
	}
	{
		$var($Throwable, var$0, nullptr);
		bool var$2 = false;
		bool return$1 = false;
		try {
			var$2 = $TransferHandler::importData(support);
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			this->isDrop = false;
			this->modeBetween = false;
			$set(this, dropBias, nullptr);
			this->dropAction = $TransferHandler::MOVE;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool BasicTextUI$TextTransferHandler::importData($JComponent* comp, $Transferable* t) {
	$useLocalCurrentObjectStackCache();
	$var($JTextComponent, c, $cast($JTextComponent, comp));
	int32_t pos = this->modeBetween ? $nc($($nc(c)->getDropLocation()))->getIndex() : c->getCaretPosition();
	if (this->dropAction == $TransferHandler::MOVE && c == this->exportComp && pos >= this->p0 && pos <= this->p1) {
		this->shouldRemove = false;
		return true;
	}
	bool imported = false;
	$var($DataFlavor, importFlavor, getImportFlavor($($nc(t)->getTransferDataFlavors()), c));
	if (importFlavor != nullptr) {
		try {
			bool useRead = false;
			if ($instanceOf($JEditorPane, comp)) {
				$var($JEditorPane, ep, $cast($JEditorPane, comp));
				bool var$0 = !$nc($($nc(ep)->getContentType()))->startsWith("text/plain"_s);
				if (var$0 && $nc($(importFlavor->getMimeType()))->startsWith($(ep->getContentType()))) {
					useRead = true;
				}
			}
			$var($InputContext, ic, c->getInputContext());
			if (ic != nullptr) {
				ic->endComposition();
			}
			$var($Reader, r, importFlavor->getReaderForText(t));
			if (this->modeBetween) {
				$var($Caret, caret, c->getCaret());
				if ($instanceOf($DefaultCaret, caret)) {
					$nc(($cast($DefaultCaret, caret)))->setDot(pos, this->dropBias);
				} else {
					c->setCaretPosition(pos);
				}
			}
			handleReaderImport(r, c, useRead);
			if (this->isDrop) {
				c->requestFocus();
				$var($Caret, caret, c->getCaret());
				if ($instanceOf($DefaultCaret, caret)) {
					int32_t newPos = $nc(caret)->getDot();
					$var($Position$Bias, newBias, $nc(($cast($DefaultCaret, caret)))->getDotBias());
					$nc(($cast($DefaultCaret, caret)))->setDot(pos, this->dropBias);
					$nc(($cast($DefaultCaret, caret)))->moveDot(newPos, newBias);
				} else {
					c->select(pos, c->getCaretPosition());
				}
			}
			imported = true;
		} catch ($UnsupportedFlavorException&) {
			$catch();
		} catch ($BadLocationException&) {
			$catch();
		} catch ($IOException&) {
			$catch();
		}
	}
	return imported;
}

bool BasicTextUI$TextTransferHandler::canImport($JComponent* comp, $DataFlavorArray* flavors) {
	$var($JTextComponent, c, $cast($JTextComponent, comp));
	bool var$0 = $nc(c)->isEditable();
	if (!(var$0 && c->isEnabled())) {
		return false;
	}
	return (getImportFlavor(flavors, c) != nullptr);
}

BasicTextUI$TextTransferHandler::BasicTextUI$TextTransferHandler() {
}

$Class* BasicTextUI$TextTransferHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTextUI$TextTransferHandler, name, initialize, &_BasicTextUI$TextTransferHandler_ClassInfo_, allocate$BasicTextUI$TextTransferHandler);
	return class$;
}

$Class* BasicTextUI$TextTransferHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax