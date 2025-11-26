#include <javax/swing/plaf/synth/SynthTableUI$SynthTableCellRenderer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/lang/Number.h>
#include <java/text/DateFormat.h>
#include <java/text/Format.h>
#include <java/text/NumberFormat.h>
#include <java/util/Date.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <javax/swing/plaf/synth/SynthBorder.h>
#include <javax/swing/plaf/synth/SynthLabelUI.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthTableUI.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <jcpp.h>

#undef CENTER
#undef LEADING
#undef TRAILING

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $DateFormat = ::java::text::DateFormat;
using $Format = ::java::text::Format;
using $NumberFormat = ::java::text::NumberFormat;
using $Date = ::java::util::Date;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $LabelUI = ::javax::swing::plaf::LabelUI;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;
using $SynthBorder = ::javax::swing::plaf::synth::SynthBorder;
using $SynthLabelUI = ::javax::swing::plaf::synth::SynthLabelUI;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthTableUI = ::javax::swing::plaf::synth::SynthTableUI;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTableUI$SynthTableCellRenderer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTableUI$SynthTableCellRenderer, this$0)},
	{"numberFormat", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SynthTableUI$SynthTableCellRenderer, numberFormat)},
	{"dateFormat", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SynthTableUI$SynthTableCellRenderer, dateFormat)},
	{"opaque", "Z", nullptr, $PRIVATE, $field(SynthTableUI$SynthTableCellRenderer, opaque)},
	{}
};

$MethodInfo _SynthTableUI$SynthTableCellRenderer_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthTableUI;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTableUI$SynthTableCellRenderer::*)($SynthTableUI*)>(&SynthTableUI$SynthTableCellRenderer::init$))},
	{"configureValue", "(Ljava/lang/Object;Ljava/lang/Class;)V", "(Ljava/lang/Object;Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(SynthTableUI$SynthTableCellRenderer::*)(Object$*,$Class*)>(&SynthTableUI$SynthTableCellRenderer::configureValue))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"isOpaque", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthTableUI$SynthTableCellRenderer_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTableUI$SynthTableCellRenderer", "javax.swing.plaf.synth.SynthTableUI", "SynthTableCellRenderer", $PRIVATE},
	{}
};

$ClassInfo _SynthTableUI$SynthTableCellRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthTableUI$SynthTableCellRenderer",
	"javax.swing.table.DefaultTableCellRenderer",
	nullptr,
	_SynthTableUI$SynthTableCellRenderer_FieldInfo_,
	_SynthTableUI$SynthTableCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTableUI$SynthTableCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTableUI"
};

$Object* allocate$SynthTableUI$SynthTableCellRenderer($Class* clazz) {
	return $of($alloc(SynthTableUI$SynthTableCellRenderer));
}

void SynthTableUI$SynthTableCellRenderer::init$($SynthTableUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultTableCellRenderer::init$();
}

void SynthTableUI$SynthTableCellRenderer::setOpaque(bool isOpaque) {
	this->opaque = isOpaque;
}

bool SynthTableUI$SynthTableCellRenderer::isOpaque() {
	return this->opaque;
}

$String* SynthTableUI$SynthTableCellRenderer::getName() {
	$var($String, name, $DefaultTableCellRenderer::getName());
	if (name == nullptr) {
		return "Table.cellRenderer"_s;
	}
	return name;
}

void SynthTableUI$SynthTableCellRenderer::setBorder($Border* b) {
	if (this->this$0->useUIBorder || $instanceOf($SynthBorder, b)) {
		$DefaultTableCellRenderer::setBorder(b);
	}
}

$Component* SynthTableUI$SynthTableCellRenderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	if (!this->this$0->useTableColors && (isSelected || hasFocus)) {
		$load($SynthLabelUI);
		$var($ComponentUI, var$0, $cast($SynthLabelUI, $SynthLookAndFeel::getUIOfType($(getUI()), $SynthLabelUI::class$)));
		bool var$1 = isSelected;
		bool var$2 = hasFocus;
		$SynthLookAndFeel::setSelectedUI(var$0, var$1, var$2, $nc(table)->isEnabled(), false);
	} else {
		$SynthLookAndFeel::resetSelectedUI();
	}
	$DefaultTableCellRenderer::getTableCellRendererComponent(table, value, isSelected, hasFocus, row, column);
	setIcon(nullptr);
	if (table != nullptr) {
		configureValue(value, table->getColumnClass(column));
	}
	return this;
}

void SynthTableUI$SynthTableCellRenderer::configureValue(Object$* value, $Class* columnClass) {
	$useLocalCurrentObjectStackCache();
	if (columnClass == $Object::class$ || columnClass == nullptr) {
		setHorizontalAlignment($JLabel::LEADING);
	} else {
		$load($Float);
		$load($Double);
		if (columnClass == $Float::class$ || columnClass == $Double::class$) {
			if (this->numberFormat == nullptr) {
				$set(this, numberFormat, $NumberFormat::getInstance());
			}
			setHorizontalAlignment($JLabel::TRAILING);
			setText((value == nullptr) ? ""_s : $($nc(($cast($NumberFormat, this->numberFormat)))->format(value)));
		} else {
			$load($Number);
			if (columnClass == $Number::class$) {
				setHorizontalAlignment($JLabel::TRAILING);
			} else {
				$load($Icon);
				$load($ImageIcon);
				if (columnClass == $Icon::class$ || columnClass == $ImageIcon::class$) {
					setHorizontalAlignment($JLabel::CENTER);
					setIcon(($instanceOf($Icon, value)) ? $cast($Icon, value) : ($Icon*)nullptr);
					setText(""_s);
				} else {
					$load($Date);
					if (columnClass == $Date::class$) {
						if (this->dateFormat == nullptr) {
							$set(this, dateFormat, $DateFormat::getDateInstance());
						}
						setHorizontalAlignment($JLabel::LEADING);
						setText((value == nullptr) ? ""_s : $($nc(($cast($Format, this->dateFormat)))->format(value)));
					} else {
						configureValue(value, columnClass->getSuperclass());
					}
				}
			}
		}
	}
}

void SynthTableUI$SynthTableCellRenderer::paint($Graphics* g) {
	$DefaultTableCellRenderer::paint(g);
	$SynthLookAndFeel::resetSelectedUI();
}

SynthTableUI$SynthTableCellRenderer::SynthTableUI$SynthTableCellRenderer() {
}

$Class* SynthTableUI$SynthTableCellRenderer::load$($String* name, bool initialize) {
	$loadClass(SynthTableUI$SynthTableCellRenderer, name, initialize, &_SynthTableUI$SynthTableCellRenderer_ClassInfo_, allocate$SynthTableUI$SynthTableCellRenderer);
	return class$;
}

$Class* SynthTableUI$SynthTableCellRenderer::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax