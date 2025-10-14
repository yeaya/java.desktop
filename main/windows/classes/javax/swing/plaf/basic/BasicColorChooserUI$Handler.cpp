#include <javax/swing/plaf/basic/BasicColorChooserUI$Handler.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI.h>
#include <javax/swing/plaf/basic/CenterLayout.h>
#include <jcpp.h>

#undef CENTER
#undef CHOOSER_PANELS_PROPERTY
#undef COPY
#undef PREVIEW_PANEL_PROPERTY
#undef SELECTION_MODEL_PROPERTY

using $AbstractColorChooserPanelArray = $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $TransferHandler = ::javax::swing::TransferHandler;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $ColorSelectionModel = ::javax::swing::colorchooser::ColorSelectionModel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $BasicColorChooserUI = ::javax::swing::plaf::basic::BasicColorChooserUI;
using $CenterLayout = ::javax::swing::plaf::basic::CenterLayout;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicColorChooserUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicColorChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicColorChooserUI$Handler, this$0)},
	{}
};

$MethodInfo _BasicColorChooserUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicColorChooserUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicColorChooserUI$Handler::*)($BasicColorChooserUI*)>(&BasicColorChooserUI$Handler::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicColorChooserUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicColorChooserUI$Handler", "javax.swing.plaf.basic.BasicColorChooserUI", "Handler", $PRIVATE},
	{}
};

$ClassInfo _BasicColorChooserUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicColorChooserUI$Handler",
	"java.lang.Object",
	"javax.swing.event.ChangeListener,java.awt.event.MouseListener,java.beans.PropertyChangeListener",
	_BasicColorChooserUI$Handler_FieldInfo_,
	_BasicColorChooserUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicColorChooserUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicColorChooserUI"
};

$Object* allocate$BasicColorChooserUI$Handler($Class* clazz) {
	return $of($alloc(BasicColorChooserUI$Handler));
}

int32_t BasicColorChooserUI$Handler::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool BasicColorChooserUI$Handler::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* BasicColorChooserUI$Handler::clone() {
	 return this->$ChangeListener::clone();
}

$String* BasicColorChooserUI$Handler::toString() {
	 return this->$ChangeListener::toString();
}

void BasicColorChooserUI$Handler::finalize() {
	this->$ChangeListener::finalize();
}

void BasicColorChooserUI$Handler::init$($BasicColorChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void BasicColorChooserUI$Handler::stateChanged($ChangeEvent* evt) {
	this->this$0->selectionChanged($cast($ColorSelectionModel, $($nc(evt)->getSource())));
}

void BasicColorChooserUI$Handler::mousePressed($MouseEvent* evt) {
	if ($nc(this->this$0->chooser)->getDragEnabled()) {
		$var($TransferHandler, th, $nc(this->this$0->chooser)->getTransferHandler());
		$nc(th)->exportAsDrag(this->this$0->chooser, evt, $TransferHandler::COPY);
	}
}

void BasicColorChooserUI$Handler::mouseReleased($MouseEvent* evt) {
}

void BasicColorChooserUI$Handler::mouseClicked($MouseEvent* evt) {
}

void BasicColorChooserUI$Handler::mouseEntered($MouseEvent* evt) {
}

void BasicColorChooserUI$Handler::mouseExited($MouseEvent* evt) {
}

void BasicColorChooserUI$Handler::propertyChange($PropertyChangeEvent* evt) {
	$var($String, prop, $nc(evt)->getPropertyName());
	$init($JColorChooser);
	if (prop == $JColorChooser::CHOOSER_PANELS_PROPERTY) {
		$var($AbstractColorChooserPanelArray, oldPanels, $cast($AbstractColorChooserPanelArray, evt->getOldValue()));
		$var($AbstractColorChooserPanelArray, newPanels, $cast($AbstractColorChooserPanelArray, evt->getNewValue()));
		for (int32_t i = 0; i < $nc(oldPanels)->length; ++i) {
			$var($Container, wrapper, $nc(oldPanels->get(i))->getParent());
			if (wrapper != nullptr) {
				$var($Container, parent, wrapper->getParent());
				if (parent != nullptr) {
					parent->remove(static_cast<$Component*>(wrapper));
				}
				$nc(oldPanels->get(i))->uninstallChooserPanel(this->this$0->chooser);
			}
		}
		int32_t numNewPanels = $nc(newPanels)->length;
		if (numNewPanels == 0) {
			$nc(this->this$0->chooser)->remove(static_cast<$Component*>(this->this$0->tabbedPane));
			return;
		} else if (numNewPanels == 1) {
			$nc(this->this$0->chooser)->remove(static_cast<$Component*>(this->this$0->tabbedPane));
			$var($JPanel, centerWrapper, $new($JPanel, static_cast<$LayoutManager*>($$new($CenterLayout))));
			centerWrapper->setInheritsPopupMenu(true);
			centerWrapper->add(static_cast<$Component*>(newPanels->get(0)));
			$init($BorderLayout);
			$nc(this->this$0->singlePanel)->add(static_cast<$Component*>(centerWrapper), $of($BorderLayout::CENTER));
			$nc(this->this$0->chooser)->add(static_cast<$Component*>(this->this$0->singlePanel));
		} else {
			if ($nc(oldPanels)->length < 2) {
				$nc(this->this$0->chooser)->remove(static_cast<$Component*>(this->this$0->singlePanel));
				$init($BorderLayout);
				$nc(this->this$0->chooser)->add(static_cast<$Component*>(this->this$0->tabbedPane), $of($BorderLayout::CENTER));
			}
			for (int32_t i = 0; i < newPanels->length; ++i) {
				$var($JPanel, centerWrapper, $new($JPanel, static_cast<$LayoutManager*>($$new($CenterLayout))));
				centerWrapper->setInheritsPopupMenu(true);
				$var($String, name, $nc(newPanels->get(i))->getDisplayName());
				int32_t mnemonic = $nc(newPanels->get(i))->getMnemonic();
				centerWrapper->add(static_cast<$Component*>(newPanels->get(i)));
				$nc(this->this$0->tabbedPane)->addTab(name, centerWrapper);
				if (mnemonic > 0) {
					$nc(this->this$0->tabbedPane)->setMnemonicAt(i, mnemonic);
					int32_t index = $nc(newPanels->get(i))->getDisplayedMnemonicIndex();
					if (index >= 0) {
						$nc(this->this$0->tabbedPane)->setDisplayedMnemonicIndexAt(i, index);
					}
				}
			}
		}
		$nc(this->this$0->chooser)->applyComponentOrientation($($nc(this->this$0->chooser)->getComponentOrientation()));
		for (int32_t i = 0; i < newPanels->length; ++i) {
			$nc(newPanels->get(i))->installChooserPanel(this->this$0->chooser);
		}
	} else {
		if (prop == $JColorChooser::PREVIEW_PANEL_PROPERTY) {
			this->this$0->uninstallPreviewPanel();
			this->this$0->installPreviewPanel();
		} else {
			if (prop == $JColorChooser::SELECTION_MODEL_PROPERTY) {
				$var($ColorSelectionModel, oldModel, $cast($ColorSelectionModel, evt->getOldValue()));
				$nc(oldModel)->removeChangeListener(this->this$0->previewListener);
				$var($ColorSelectionModel, newModel, $cast($ColorSelectionModel, evt->getNewValue()));
				$nc(newModel)->addChangeListener(this->this$0->previewListener);
				this->this$0->selectionChanged(newModel);
			} else if (prop == "componentOrientation"_s) {
				$var($ComponentOrientation, o, $cast($ComponentOrientation, evt->getNewValue()));
				$var($JColorChooser, cc, $cast($JColorChooser, evt->getSource()));
				if (o != $cast($ComponentOrientation, evt->getOldValue())) {
					$nc(cc)->applyComponentOrientation(o);
					cc->updateUI();
				}
			}
		}
	}
}

BasicColorChooserUI$Handler::BasicColorChooserUI$Handler() {
}

$Class* BasicColorChooserUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicColorChooserUI$Handler, name, initialize, &_BasicColorChooserUI$Handler_ClassInfo_, allocate$BasicColorChooserUI$Handler);
	return class$;
}

$Class* BasicColorChooserUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax