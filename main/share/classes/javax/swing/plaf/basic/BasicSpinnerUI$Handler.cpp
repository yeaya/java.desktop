#include <javax/swing/plaf/basic/BasicSpinnerUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/SpinnerUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicSpinnerUI$ArrowButtonHandler.h>
#include <javax/swing/plaf/basic/BasicSpinnerUI.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

#undef TOOL_TIP_TEXT_KEY

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $UIManager = ::javax::swing::UIManager;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $SpinnerUI = ::javax::swing::plaf::SpinnerUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicSpinnerUI = ::javax::swing::plaf::basic::BasicSpinnerUI;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSpinnerUI$Handler_FieldInfo_[] = {
	{"nextButton", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(BasicSpinnerUI$Handler, nextButton)},
	{"previousButton", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(BasicSpinnerUI$Handler, previousButton)},
	{"editor", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(BasicSpinnerUI$Handler, editor)},
	{}
};

$MethodInfo _BasicSpinnerUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicSpinnerUI$Handler::*)()>(&BasicSpinnerUI$Handler::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredSize", "(Ljava/awt/Component;)Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(BasicSpinnerUI$Handler::*)($Component*)>(&BasicSpinnerUI$Handler::preferredSize))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setBounds", "(Ljava/awt/Component;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSpinnerUI$Handler::*)($Component*,int32_t,int32_t,int32_t,int32_t)>(&BasicSpinnerUI$Handler::setBounds))},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateToolTipTextForChildren", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicSpinnerUI$Handler::*)($JComponent*)>(&BasicSpinnerUI$Handler::updateToolTipTextForChildren))},
	{}
};

$InnerClassInfo _BasicSpinnerUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSpinnerUI$Handler", "javax.swing.plaf.basic.BasicSpinnerUI", "Handler", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicSpinnerUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicSpinnerUI$Handler",
	"java.lang.Object",
	"java.awt.LayoutManager,java.beans.PropertyChangeListener,javax.swing.event.ChangeListener",
	_BasicSpinnerUI$Handler_FieldInfo_,
	_BasicSpinnerUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSpinnerUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSpinnerUI"
};

$Object* allocate$BasicSpinnerUI$Handler($Class* clazz) {
	return $of($alloc(BasicSpinnerUI$Handler));
}

int32_t BasicSpinnerUI$Handler::hashCode() {
	 return this->$LayoutManager::hashCode();
}

bool BasicSpinnerUI$Handler::equals(Object$* arg0) {
	 return this->$LayoutManager::equals(arg0);
}

$Object* BasicSpinnerUI$Handler::clone() {
	 return this->$LayoutManager::clone();
}

$String* BasicSpinnerUI$Handler::toString() {
	 return this->$LayoutManager::toString();
}

void BasicSpinnerUI$Handler::finalize() {
	this->$LayoutManager::finalize();
}

void BasicSpinnerUI$Handler::init$() {
	$set(this, nextButton, nullptr);
	$set(this, previousButton, nullptr);
	$set(this, editor, nullptr);
}

void BasicSpinnerUI$Handler::addLayoutComponent($String* name, $Component* c) {
	if ("Next"_s->equals(name)) {
		$set(this, nextButton, c);
	} else if ("Previous"_s->equals(name)) {
		$set(this, previousButton, c);
	} else if ("Editor"_s->equals(name)) {
		$set(this, editor, c);
	}
}

void BasicSpinnerUI$Handler::removeLayoutComponent($Component* c) {
	if (c == this->nextButton) {
		$set(this, nextButton, nullptr);
	} else if (c == this->previousButton) {
		$set(this, previousButton, nullptr);
	} else if (c == this->editor) {
		$set(this, editor, nullptr);
	}
}

$Dimension* BasicSpinnerUI$Handler::preferredSize($Component* c) {
	$init($BasicSpinnerUI);
	return (c == nullptr) ? $BasicSpinnerUI::zeroSize : $nc(c)->getPreferredSize();
}

$Dimension* BasicSpinnerUI$Handler::preferredLayoutSize($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, nextD, preferredSize(this->nextButton));
	$var($Dimension, previousD, preferredSize(this->previousButton));
	$var($Dimension, editorD, preferredSize(this->editor));
	$nc(editorD)->height = ((editorD->height + 1) / 2) * 2;
	$var($Dimension, size, $new($Dimension, editorD->width, editorD->height));
	size->width += $Math::max($nc(nextD)->width, $nc(previousD)->width);
	$var($Insets, insets, $nc(parent)->getInsets());
	size->width += $nc(insets)->left + insets->right;
	size->height += insets->top + insets->bottom;
	return size;
}

$Dimension* BasicSpinnerUI$Handler::minimumLayoutSize($Container* parent) {
	return preferredLayoutSize(parent);
}

void BasicSpinnerUI$Handler::setBounds($Component* c, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (c != nullptr) {
		c->setBounds(x, y, width, height);
	}
}

void BasicSpinnerUI$Handler::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	int32_t width = $nc(parent)->getWidth();
	int32_t height = parent->getHeight();
	$var($Insets, insets, parent->getInsets());
	if (this->nextButton == nullptr && this->previousButton == nullptr) {
		setBounds(this->editor, $nc(insets)->left, insets->top, width - insets->left - insets->right, height - insets->top - insets->bottom);
		return;
	}
	$var($Dimension, nextD, preferredSize(this->nextButton));
	$var($Dimension, previousD, preferredSize(this->previousButton));
	int32_t buttonsWidth = $Math::max($nc(nextD)->width, $nc(previousD)->width);
	int32_t editorHeight = height - ($nc(insets)->top + insets->bottom);
	$var($Insets, buttonInsets, $UIManager::getInsets("Spinner.arrowButtonInsets"_s));
	if (buttonInsets == nullptr) {
		$assign(buttonInsets, insets);
	}
	int32_t editorX = 0;
	int32_t editorWidth = 0;
	int32_t buttonsX = 0;
	if ($nc($(parent->getComponentOrientation()))->isLeftToRight()) {
		editorX = insets->left;
		editorWidth = width - insets->left - buttonsWidth - $nc(buttonInsets)->right;
		buttonsX = width - buttonsWidth - buttonInsets->right;
	} else {
		buttonsX = $nc(buttonInsets)->left;
		editorX = buttonsX + buttonsWidth;
		editorWidth = width - buttonInsets->left - buttonsWidth - insets->right;
	}
	int32_t nextY = $nc(buttonInsets)->top;
	int32_t nextHeight = (height / 2) + (height % 2) - nextY;
	int32_t previousY = buttonInsets->top + nextHeight;
	int32_t previousHeight = height - previousY - buttonInsets->bottom;
	setBounds(this->editor, editorX, insets->top, editorWidth, editorHeight);
	setBounds(this->nextButton, buttonsX, nextY, buttonsWidth, nextHeight);
	setBounds(this->previousButton, buttonsX, previousY, buttonsWidth, previousHeight);
}

void BasicSpinnerUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ($instanceOf($JSpinner, $(e->getSource()))) {
		$var($JSpinner, spinner, ($cast($JSpinner, e->getSource())));
		$var($SpinnerUI, spinnerUI, $cast($SpinnerUI, $nc(spinner)->getUI()));
		if ($instanceOf($BasicSpinnerUI, spinnerUI)) {
			$var($BasicSpinnerUI, ui, $cast($BasicSpinnerUI, spinnerUI));
			if ("editor"_s->equals(propertyName)) {
				$var($JComponent, oldEditor, $cast($JComponent, e->getOldValue()));
				$var($JComponent, newEditor, $cast($JComponent, e->getNewValue()));
				$nc(ui)->replaceEditor(oldEditor, newEditor);
				ui->updateEnabledState();
				if ($instanceOf($JSpinner$DefaultEditor, oldEditor)) {
					$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, oldEditor)))->getTextField());
					if (tf != nullptr) {
						tf->removeFocusListener($BasicSpinnerUI::nextButtonHandler);
						tf->removeFocusListener($BasicSpinnerUI::previousButtonHandler);
					}
				}
				if ($instanceOf($JSpinner$DefaultEditor, newEditor)) {
					$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, newEditor)))->getTextField());
					if (tf != nullptr) {
						if ($instanceOf($UIResource, $(tf->getFont()))) {
							$var($Font, font, spinner->getFont());
							tf->setFont(font == nullptr ? ($Font*)nullptr : static_cast<$Font*>($$new($FontUIResource, font)));
						}
						tf->addFocusListener($BasicSpinnerUI::nextButtonHandler);
						tf->addFocusListener($BasicSpinnerUI::previousButtonHandler);
					}
				}
			} else {
				bool var$1 = "enabled"_s->equals(propertyName);
				if (var$1 || "model"_s->equals(propertyName)) {
					$nc(ui)->updateEnabledState();
				} else if ("font"_s->equals(propertyName)) {
					$var($JComponent, editor, spinner->getEditor());
					if ($instanceOf($JSpinner$DefaultEditor, editor)) {
						$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, editor)))->getTextField());
						if (tf != nullptr) {
							if ($instanceOf($UIResource, $(tf->getFont()))) {
								$var($Font, font, spinner->getFont());
								tf->setFont(font == nullptr ? ($Font*)nullptr : static_cast<$Font*>($$new($FontUIResource, font)));
							}
						}
					}
				} else {
					$init($JComponent);
					if ($nc($JComponent::TOOL_TIP_TEXT_KEY)->equals(propertyName)) {
						updateToolTipTextForChildren(spinner);
					} else if ("componentOrientation"_s->equals(propertyName)) {
						$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
						if (o != $cast($ComponentOrientation, e->getOldValue())) {
							$var($JComponent, editor, spinner->getEditor());
							if (editor != nullptr) {
								editor->applyComponentOrientation(o);
							}
							spinner->revalidate();
							spinner->repaint();
						}
					}
				}
			}
		}
	} else if ($instanceOf($JComponent, $(e->getSource()))) {
		$var($JComponent, c, $cast($JComponent, e->getSource()));
		bool var$3 = ($instanceOf($JPanel, $($nc(c)->getParent())));
		bool var$2 = var$3 && ($instanceOf($JSpinner, $($nc($(c->getParent()))->getParent())));
		if (var$2 && "border"_s->equals(propertyName)) {
			$var($JSpinner, spinner, $cast($JSpinner, $nc($(c->getParent()))->getParent()));
			$var($SpinnerUI, spinnerUI, $cast($SpinnerUI, $nc(spinner)->getUI()));
			if ($instanceOf($BasicSpinnerUI, spinnerUI)) {
				$var($BasicSpinnerUI, ui, $cast($BasicSpinnerUI, spinnerUI));
				$nc(ui)->maybeRemoveEditorBorder(c);
			}
		}
	}
}

void BasicSpinnerUI$Handler::updateToolTipTextForChildren($JComponent* spinner) {
	$useLocalCurrentObjectStackCache();
	$var($String, toolTipText, $nc(spinner)->getToolTipText());
	$var($ComponentArray, children, spinner->getComponents());
	for (int32_t i = 0; i < $nc(children)->length; ++i) {
		if ($instanceOf($JSpinner$DefaultEditor, children->get(i))) {
			$var($JTextField, tf, $nc(($cast($JSpinner$DefaultEditor, children->get(i))))->getTextField());
			if (tf != nullptr) {
				tf->setToolTipText(toolTipText);
			}
		} else if ($instanceOf($JComponent, children->get(i))) {
			$nc(($cast($JComponent, children->get(i))))->setToolTipText($(spinner->getToolTipText()));
		}
	}
}

void BasicSpinnerUI$Handler::stateChanged($ChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($JSpinner, $($nc(e)->getSource()))) {
		$var($JSpinner, spinner, $cast($JSpinner, e->getSource()));
		$var($SpinnerUI, spinnerUI, $cast($SpinnerUI, $nc(spinner)->getUI()));
		if ($DefaultLookup::getBoolean(spinner, spinnerUI, "Spinner.disableOnBoundaryValues"_s, false) && $instanceOf($BasicSpinnerUI, spinnerUI)) {
			$var($BasicSpinnerUI, ui, $cast($BasicSpinnerUI, spinnerUI));
			$nc(ui)->updateEnabledState();
		}
	}
}

BasicSpinnerUI$Handler::BasicSpinnerUI$Handler() {
}

$Class* BasicSpinnerUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicSpinnerUI$Handler, name, initialize, &_BasicSpinnerUI$Handler_ClassInfo_, allocate$BasicSpinnerUI$Handler);
	return class$;
}

$Class* BasicSpinnerUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax