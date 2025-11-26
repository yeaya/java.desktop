#include <bug8023474$CheckboxCellRenderer.h>

#include <bug8023474.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JTree.h>
#include <jcpp.h>

using $bug8023474 = ::bug8023474;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JTree = ::javax::swing::JTree;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;

$FieldInfo _bug8023474$CheckboxCellRenderer_FieldInfo_[] = {
	{"checkbox", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE, $field(bug8023474$CheckboxCellRenderer, checkbox)},
	{}
};

$MethodInfo _bug8023474$CheckboxCellRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8023474$CheckboxCellRenderer::*)()>(&bug8023474$CheckboxCellRenderer::init$))},
	{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug8023474$CheckboxCellRenderer_InnerClassesInfo_[] = {
	{"bug8023474$CheckboxCellRenderer", "bug8023474", "CheckboxCellRenderer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug8023474$CheckboxCellRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"bug8023474$CheckboxCellRenderer",
	"javax.swing.JPanel",
	"javax.swing.tree.TreeCellRenderer",
	_bug8023474$CheckboxCellRenderer_FieldInfo_,
	_bug8023474$CheckboxCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_bug8023474$CheckboxCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8023474"
};

$Object* allocate$bug8023474$CheckboxCellRenderer($Class* clazz) {
	return $of($alloc(bug8023474$CheckboxCellRenderer));
}

$String* bug8023474$CheckboxCellRenderer::toString() {
	 return this->$JPanel::toString();
}

int32_t bug8023474$CheckboxCellRenderer::hashCode() {
	 return this->$JPanel::hashCode();
}

bool bug8023474$CheckboxCellRenderer::equals(Object$* arg0) {
	 return this->$JPanel::equals(arg0);
}

$Object* bug8023474$CheckboxCellRenderer::clone() {
	 return this->$JPanel::clone();
}

void bug8023474$CheckboxCellRenderer::finalize() {
	this->$JPanel::finalize();
}

void bug8023474$CheckboxCellRenderer::init$() {
	$JPanel::init$();
	setOpaque(false);
	$set(this, checkbox, $new($JCheckBox));
	add(static_cast<$Component*>(this->checkbox));
}

$Component* bug8023474$CheckboxCellRenderer::getTreeCellRendererComponent($JTree* tree, Object$* value, bool selected, bool expanded, bool leaf, int32_t row, bool hasFocus) {
	$nc(this->checkbox)->setText($($nc($of(value))->toString()));
	$nc(this->checkbox)->setSelected(false);
	return this;
}

bug8023474$CheckboxCellRenderer::bug8023474$CheckboxCellRenderer() {
}

$Class* bug8023474$CheckboxCellRenderer::load$($String* name, bool initialize) {
	$loadClass(bug8023474$CheckboxCellRenderer, name, initialize, &_bug8023474$CheckboxCellRenderer_ClassInfo_, allocate$bug8023474$CheckboxCellRenderer);
	return class$;
}

$Class* bug8023474$CheckboxCellRenderer::class$ = nullptr;