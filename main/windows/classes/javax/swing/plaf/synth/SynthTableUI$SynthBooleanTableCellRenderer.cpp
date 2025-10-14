#include <javax/swing/plaf/synth/SynthTableUI$SynthBooleanTableCellRenderer.h>

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
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/synth/SynthTableUI.h>
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
using $UIResource = ::javax::swing::plaf::UIResource;
using $SynthTableUI = ::javax::swing::plaf::synth::SynthTableUI;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTableUI$SynthBooleanTableCellRenderer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTableUI$SynthBooleanTableCellRenderer, this$0)},
	{"isRowSelected", "Z", nullptr, $PRIVATE, $field(SynthTableUI$SynthBooleanTableCellRenderer, isRowSelected)},
	{}
};

$MethodInfo _SynthTableUI$SynthBooleanTableCellRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/synth/SynthTableUI;)V", nullptr, $PUBLIC, $method(static_cast<void(SynthTableUI$SynthBooleanTableCellRenderer::*)($SynthTableUI*)>(&SynthTableUI$SynthBooleanTableCellRenderer::init$))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"isOpaque", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unwrap", "(Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $PRIVATE, $method(static_cast<$Color*(SynthTableUI$SynthBooleanTableCellRenderer::*)($Color*)>(&SynthTableUI$SynthBooleanTableCellRenderer::unwrap))},
	{}
};

$InnerClassInfo _SynthTableUI$SynthBooleanTableCellRenderer_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTableUI$SynthBooleanTableCellRenderer", "javax.swing.plaf.synth.SynthTableUI", "SynthBooleanTableCellRenderer", $PRIVATE},
	{}
};

$ClassInfo _SynthTableUI$SynthBooleanTableCellRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthTableUI$SynthBooleanTableCellRenderer",
	"javax.swing.JCheckBox",
	"javax.swing.table.TableCellRenderer",
	_SynthTableUI$SynthBooleanTableCellRenderer_FieldInfo_,
	_SynthTableUI$SynthBooleanTableCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTableUI$SynthBooleanTableCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTableUI"
};

$Object* allocate$SynthTableUI$SynthBooleanTableCellRenderer($Class* clazz) {
	return $of($alloc(SynthTableUI$SynthBooleanTableCellRenderer));
}

$String* SynthTableUI$SynthBooleanTableCellRenderer::toString() {
	 return this->$JCheckBox::toString();
}

int32_t SynthTableUI$SynthBooleanTableCellRenderer::hashCode() {
	 return this->$JCheckBox::hashCode();
}

bool SynthTableUI$SynthBooleanTableCellRenderer::equals(Object$* arg0) {
	 return this->$JCheckBox::equals(arg0);
}

$Object* SynthTableUI$SynthBooleanTableCellRenderer::clone() {
	 return this->$JCheckBox::clone();
}

void SynthTableUI$SynthBooleanTableCellRenderer::finalize() {
	this->$JCheckBox::finalize();
}

void SynthTableUI$SynthBooleanTableCellRenderer::init$($SynthTableUI* this$0) {
	$set(this, this$0, this$0);
	$JCheckBox::init$();
	setHorizontalAlignment($JLabel::CENTER);
	setName("Table.cellRenderer"_s);
}

$Component* SynthTableUI$SynthBooleanTableCellRenderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	this->isRowSelected = isSelected;
	if (isSelected) {
		setForeground($(unwrap($($nc(table)->getSelectionForeground()))));
		setBackground($(unwrap($($nc(table)->getSelectionBackground()))));
	} else {
		setForeground($(unwrap($($nc(table)->getForeground()))));
		setBackground($(unwrap($($nc(table)->getBackground()))));
	}
	setSelected((value != nullptr && $nc(($cast($Boolean, value)))->booleanValue()));
	return this;
}

$Color* SynthTableUI$SynthBooleanTableCellRenderer::unwrap($Color* c) {
	if ($instanceOf($UIResource, c)) {
		return $new($Color, $nc(c)->getRGB());
	}
	return c;
}

bool SynthTableUI$SynthBooleanTableCellRenderer::isOpaque() {
	return this->isRowSelected ? true : $JCheckBox::isOpaque();
}

SynthTableUI$SynthBooleanTableCellRenderer::SynthTableUI$SynthBooleanTableCellRenderer() {
}

$Class* SynthTableUI$SynthBooleanTableCellRenderer::load$($String* name, bool initialize) {
	$loadClass(SynthTableUI$SynthBooleanTableCellRenderer, name, initialize, &_SynthTableUI$SynthBooleanTableCellRenderer_ClassInfo_, allocate$SynthTableUI$SynthBooleanTableCellRenderer);
	return class$;
}

$Class* SynthTableUI$SynthBooleanTableCellRenderer::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax