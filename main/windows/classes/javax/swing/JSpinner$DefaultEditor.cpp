#include <javax/swing/JSpinner$DefaultEditor.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef DISABLED_ACTION

using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JPanel = ::javax::swing::JPanel;
using $JSpinner = ::javax::swing::JSpinner;
using $JTextField = ::javax::swing::JTextField;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {

$MethodInfo _JSpinner$DefaultEditor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JSpinner;)V", nullptr, $PUBLIC, $method(static_cast<void(JSpinner$DefaultEditor::*)($JSpinner*)>(&JSpinner$DefaultEditor::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"commitEdit", "()V", nullptr, $PUBLIC, nullptr, "java.text.ParseException"},
	{"dismiss", "(Ljavax/swing/JSpinner;)V", nullptr, $PUBLIC},
	{"getBaseline", "(II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "()Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getSpinner", "()Ljavax/swing/JSpinner;", nullptr, $PUBLIC},
	{"getTextField", "()Ljavax/swing/JFormattedTextField;", nullptr, $PUBLIC},
	{"insetSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(JSpinner$DefaultEditor::*)($Container*)>(&JSpinner$DefaultEditor::insetSize))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JSpinner$DefaultEditor_InnerClassesInfo_[] = {
	{"javax.swing.JSpinner$DefaultEditor", "javax.swing.JSpinner", "DefaultEditor", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JSpinner$DefaultEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JSpinner$DefaultEditor",
	"javax.swing.JPanel",
	"javax.swing.event.ChangeListener,java.beans.PropertyChangeListener,java.awt.LayoutManager",
	nullptr,
	_JSpinner$DefaultEditor_MethodInfo_,
	nullptr,
	nullptr,
	_JSpinner$DefaultEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JSpinner"
};

$Object* allocate$JSpinner$DefaultEditor($Class* clazz) {
	return $of($alloc(JSpinner$DefaultEditor));
}

$String* JSpinner$DefaultEditor::toString() {
	 return this->$JPanel::toString();
}

int32_t JSpinner$DefaultEditor::hashCode() {
	 return this->$JPanel::hashCode();
}

bool JSpinner$DefaultEditor::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* JSpinner$DefaultEditor::clone() {
	 return this->$JPanel::clone();
}

void JSpinner$DefaultEditor::finalize() {
	this->$JPanel::finalize();
}

void JSpinner$DefaultEditor::init$($JSpinner* spinner) {
	$JPanel::init$(($LayoutManager*)nullptr);
	$var($JFormattedTextField, ftf, $new($JFormattedTextField));
	ftf->setName("Spinner.formattedTextField"_s);
	ftf->setValue($($nc(spinner)->getValue()));
	ftf->addPropertyChangeListener(this);
	ftf->setEditable(false);
	ftf->setInheritsPopupMenu(true);
	$var($String, toolTipText, $nc(spinner)->getToolTipText());
	if (toolTipText != nullptr) {
		ftf->setToolTipText(toolTipText);
	}
	add(static_cast<$Component*>(ftf));
	setLayout(this);
	spinner->addChangeListener(this);
	$var($ActionMap, ftfMap, ftf->getActionMap());
	if (ftfMap != nullptr) {
		ftfMap->put("increment"_s, $JSpinner::DISABLED_ACTION);
		ftfMap->put("decrement"_s, $JSpinner::DISABLED_ACTION);
	}
}

void JSpinner$DefaultEditor::dismiss($JSpinner* spinner) {
	$nc(spinner)->removeChangeListener(this);
}

$JSpinner* JSpinner$DefaultEditor::getSpinner() {
	{
		$var($Component, c, this);
		for (; c != nullptr; $assign(c, c->getParent())) {
			if ($instanceOf($JSpinner, c)) {
				return $cast($JSpinner, c);
			}
		}
	}
	return nullptr;
}

$JFormattedTextField* JSpinner$DefaultEditor::getTextField() {
	return $cast($JFormattedTextField, getComponent(0));
}

void JSpinner$DefaultEditor::stateChanged($ChangeEvent* e) {
	$var($JSpinner, spinner, ($cast($JSpinner, $nc(e)->getSource())));
	$nc($(getTextField()))->setValue($($nc(spinner)->getValue()));
}

void JSpinner$DefaultEditor::propertyChange($PropertyChangeEvent* e) {
	$var($JSpinner, spinner, getSpinner());
	if (spinner == nullptr) {
		return;
	}
	$var($Object, source, $nc(e)->getSource());
	$var($String, name, e->getPropertyName());
	if ($instanceOf($JFormattedTextField, source)) {
		if ("value"_s->equals(name)) {
			$var($Object, lastValue, $nc(spinner)->getValue());
			try {
				spinner->setValue($($nc($(getTextField()))->getValue()));
			} catch ($IllegalArgumentException&) {
				$var($IllegalArgumentException, iae, $catch());
				try {
					$nc(($cast($JFormattedTextField, source)))->setValue(lastValue);
				} catch ($IllegalArgumentException&) {
					$catch();
				}
			}
		} else if ("font"_s->equals(name)) {
			$var($Object, newfont, e->getNewValue());
			if ($instanceOf($UIResource, newfont)) {
				$var($Font, font, $nc(spinner)->getFont());
				if (!$nc($of(newfont))->equals(font)) {
					$nc($(getTextField()))->setFont(font == nullptr ? ($Font*)nullptr : static_cast<$Font*>($$new($FontUIResource, font)));
				}
			}
		}
	}
}

void JSpinner$DefaultEditor::addLayoutComponent($String* name, $Component* child) {
}

void JSpinner$DefaultEditor::removeLayoutComponent($Component* child) {
}

$Dimension* JSpinner$DefaultEditor::insetSize($Container* parent) {
	$var($Insets, insets, $nc(parent)->getInsets());
	int32_t w = $nc(insets)->left + insets->right;
	int32_t h = insets->top + insets->bottom;
	return $new($Dimension, w, h);
}

$Dimension* JSpinner$DefaultEditor::preferredLayoutSize($Container* parent) {
	$var($Dimension, preferredSize, insetSize(parent));
	if ($nc(parent)->getComponentCount() > 0) {
		$var($Dimension, childSize, $nc($(getComponent(0)))->getPreferredSize());
		$nc(preferredSize)->width += $nc(childSize)->width;
		preferredSize->height += childSize->height;
	}
	return preferredSize;
}

$Dimension* JSpinner$DefaultEditor::minimumLayoutSize($Container* parent) {
	$var($Dimension, minimumSize, insetSize(parent));
	if ($nc(parent)->getComponentCount() > 0) {
		$var($Dimension, childSize, $nc($(getComponent(0)))->getMinimumSize());
		$nc(minimumSize)->width += $nc(childSize)->width;
		minimumSize->height += childSize->height;
	}
	return minimumSize;
}

void JSpinner$DefaultEditor::layoutContainer($Container* parent) {
	if ($nc(parent)->getComponentCount() > 0) {
		$var($Insets, insets, parent->getInsets());
		int32_t w = parent->getWidth() - ($nc(insets)->left + insets->right);
		int32_t h = parent->getHeight() - (insets->top + insets->bottom);
		$nc($(getComponent(0)))->setBounds(insets->left, insets->top, w, h);
	}
}

void JSpinner$DefaultEditor::commitEdit() {
	$var($JFormattedTextField, ftf, getTextField());
	$nc(ftf)->commitEdit();
}

int32_t JSpinner$DefaultEditor::getBaseline(int32_t width, int32_t height) {
	$JPanel::getBaseline(width, height);
	$var($Insets, insets, getInsets());
	width = width - $nc(insets)->left - insets->right;
	height = height - insets->top - insets->bottom;
	int32_t baseline = $nc($(getComponent(0)))->getBaseline(width, height);
	if (baseline >= 0) {
		return baseline + insets->top;
	}
	return -1;
}

$Component$BaselineResizeBehavior* JSpinner$DefaultEditor::getBaselineResizeBehavior() {
	return $nc($(getComponent(0)))->getBaselineResizeBehavior();
}

JSpinner$DefaultEditor::JSpinner$DefaultEditor() {
}

$Class* JSpinner$DefaultEditor::load$($String* name, bool initialize) {
	$loadClass(JSpinner$DefaultEditor, name, initialize, &_JSpinner$DefaultEditor_ClassInfo_, allocate$JSpinner$DefaultEditor);
	return class$;
}

$Class* JSpinner$DefaultEditor::class$ = nullptr;

	} // swing
} // javax