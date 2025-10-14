#include <javax/swing/JTable$BooleanRenderer.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <jcpp.h>

#undef CENTER

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $JToggleButton = ::javax::swing::JToggleButton;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;

namespace javax {
	namespace swing {

$FieldInfo _JTable$BooleanRenderer_FieldInfo_[] = {
	{"noFocusBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTable$BooleanRenderer, noFocusBorder)},
	{}
};

$MethodInfo _JTable$BooleanRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTable$BooleanRenderer::*)()>(&JTable$BooleanRenderer::init$))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTable$BooleanRenderer_InnerClassesInfo_[] = {
	{"javax.swing.JTable$BooleanRenderer", "javax.swing.JTable", "BooleanRenderer", $STATIC},
	{}
};

$ClassInfo _JTable$BooleanRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$BooleanRenderer",
	"javax.swing.JCheckBox",
	"javax.swing.table.TableCellRenderer,javax.swing.plaf.UIResource",
	_JTable$BooleanRenderer_FieldInfo_,
	_JTable$BooleanRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$BooleanRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$BooleanRenderer($Class* clazz) {
	return $of($alloc(JTable$BooleanRenderer));
}

$String* JTable$BooleanRenderer::toString() {
	 return this->$JCheckBox::toString();
}

int32_t JTable$BooleanRenderer::hashCode() {
	 return this->$JCheckBox::hashCode();
}

bool JTable$BooleanRenderer::equals(Object$* arg0) {
	 return this->$JCheckBox::equals(arg0);
}

$Object* JTable$BooleanRenderer::clone() {
	 return this->$JCheckBox::clone();
}

void JTable$BooleanRenderer::finalize() {
	this->$JCheckBox::finalize();
}

$Border* JTable$BooleanRenderer::noFocusBorder = nullptr;

void JTable$BooleanRenderer::init$() {
	$JCheckBox::init$();
	setHorizontalAlignment($JLabel::CENTER);
	setBorderPainted(true);
}

$Component* JTable$BooleanRenderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	if (isSelected) {
		setForeground($($nc(table)->getSelectionForeground()));
		$JCheckBox::setBackground($($nc(table)->getSelectionBackground()));
	} else {
		setForeground($($nc(table)->getForeground()));
		setBackground($($nc(table)->getBackground()));
	}
	setSelected((value != nullptr && $nc(($cast($Boolean, value)))->booleanValue()));
	if (hasFocus) {
		setBorder($($UIManager::getBorder("Table.focusCellHighlightBorder"_s)));
	} else {
		setBorder(JTable$BooleanRenderer::noFocusBorder);
	}
	return this;
}

void clinit$JTable$BooleanRenderer($Class* class$) {
	$assignStatic(JTable$BooleanRenderer::noFocusBorder, $new($EmptyBorder, 1, 1, 1, 1));
}

JTable$BooleanRenderer::JTable$BooleanRenderer() {
}

$Class* JTable$BooleanRenderer::load$($String* name, bool initialize) {
	$loadClass(JTable$BooleanRenderer, name, initialize, &_JTable$BooleanRenderer_ClassInfo_, clinit$JTable$BooleanRenderer, allocate$JTable$BooleanRenderer);
	return class$;
}

$Class* JTable$BooleanRenderer::class$ = nullptr;

	} // swing
} // javax