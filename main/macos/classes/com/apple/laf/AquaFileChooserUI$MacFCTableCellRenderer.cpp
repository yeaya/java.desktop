#include <com/apple/laf/AquaFileChooserUI$MacFCTableCellRenderer.h>

#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$MacFCTableCellRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$MacFCTableCellRenderer, this$0)},
	{"fIsSelected", "Z", nullptr, 0, $field(AquaFileChooserUI$MacFCTableCellRenderer, fIsSelected)},
	{}
};

$MethodInfo _AquaFileChooserUI$MacFCTableCellRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaFileChooserUI$MacFCTableCellRenderer::*)($AquaFileChooserUI*,$Font*)>(&AquaFileChooserUI$MacFCTableCellRenderer::init$))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"isSelected", "()Z", nullptr, $PUBLIC},
	{"layoutCL", "(Ljavax/swing/JLabel;Ljava/awt/FontMetrics;Ljava/lang/String;Ljavax/swing/Icon;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaFileChooserUI$MacFCTableCellRenderer_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer", "com.apple.laf.AquaFileChooserUI", "MacFCTableCellRenderer", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$MacFCTableCellRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer",
	"javax.swing.table.DefaultTableCellRenderer",
	nullptr,
	_AquaFileChooserUI$MacFCTableCellRenderer_FieldInfo_,
	_AquaFileChooserUI$MacFCTableCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$MacFCTableCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$MacFCTableCellRenderer($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$MacFCTableCellRenderer));
}

void AquaFileChooserUI$MacFCTableCellRenderer::init$($AquaFileChooserUI* this$0, $Font* f) {
	$set(this, this$0, this$0);
	$DefaultTableCellRenderer::init$();
	this->fIsSelected = false;
	setFont(f);
	setIconTextGap(10);
}

$Component* AquaFileChooserUI$MacFCTableCellRenderer::getTableCellRendererComponent($JTable* list, Object$* value, bool isSelected, bool cellHasFocus, int32_t index, int32_t col) {
	$DefaultTableCellRenderer::getTableCellRendererComponent(list, value, isSelected, false, index, col);
	this->fIsSelected = isSelected;
	return this;
}

bool AquaFileChooserUI$MacFCTableCellRenderer::isSelected() {
	return this->fIsSelected && isEnabled();
}

$String* AquaFileChooserUI$MacFCTableCellRenderer::layoutCL($JLabel* label, $FontMetrics* fontMetrics, $String* text, $Icon* icon, $Rectangle* viewR, $Rectangle* iconR, $Rectangle* textR) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, var$0, static_cast<$JComponent*>(label));
	$var($FontMetrics, var$1, fontMetrics);
	$var($String, var$2, text);
	$var($Icon, var$3, icon);
	int32_t var$4 = $nc(label)->getVerticalAlignment();
	int32_t var$5 = label->getHorizontalAlignment();
	int32_t var$6 = label->getVerticalTextPosition();
	int32_t var$7 = label->getHorizontalTextPosition();
	$var($Rectangle, var$8, viewR);
	$var($Rectangle, var$9, iconR);
	$var($Rectangle, var$10, textR);
	return $SwingUtilities::layoutCompoundLabel(var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, label->getIconTextGap());
}

void AquaFileChooserUI$MacFCTableCellRenderer::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($String, text, getText());
	$var($Icon, icon, getIcon());
	if (icon != nullptr && !isEnabled()) {
		$var($Icon, disabledIcon, getDisabledIcon());
		if (disabledIcon != nullptr) {
			$assign(icon, disabledIcon);
		}
	}
	if ((icon == nullptr) && (text == nullptr)) {
		return;
	}
	$nc(g)->setColor($(getBackground()));
	int32_t var$0 = getWidth();
	g->fillRect(0, 0, var$0, getHeight());
	$var($FontMetrics, fm, g->getFontMetrics());
	$var($Insets, paintViewInsets, getInsets(nullptr));
	$nc(paintViewInsets)->left += 10;
	int32_t var$1 = paintViewInsets->left;
	int32_t var$2 = paintViewInsets->top;
	int32_t var$3 = getWidth() - (paintViewInsets->left + paintViewInsets->right);
	$var($Rectangle, paintViewR, $new($Rectangle, var$1, var$2, var$3, getHeight() - (paintViewInsets->top + paintViewInsets->bottom)));
	$var($Rectangle, paintIconR, $new($Rectangle));
	$var($Rectangle, paintTextR, $new($Rectangle));
	$var($String, clippedText, layoutCL(this, fm, text, icon, paintViewR, paintIconR, paintTextR));
	if (icon != nullptr) {
		icon->paintIcon(this, g, paintIconR->x + 5, paintIconR->y);
	}
	if (text != nullptr) {
		int32_t textX = paintTextR->x;
		int32_t textY = paintTextR->y + $nc(fm)->getAscent() + 1;
		if (isEnabled()) {
			$var($Color, background, getBackground());
			g->setColor(background);
			g->fillRect(textX - 1, paintTextR->y, paintTextR->width + 2, fm->getAscent() + 2);
			g->setColor($(getForeground()));
			$SwingUtilities2::drawString(static_cast<$JComponent*>(this->this$0->filechooser), g, clippedText, textX, textY);
		} else {
			$var($Color, background, getBackground());
			g->setColor(background);
			g->fillRect(textX - 1, paintTextR->y, paintTextR->width + 2, fm->getAscent() + 2);
			g->setColor($($nc(background)->brighter()));
			$SwingUtilities2::drawString(static_cast<$JComponent*>(this->this$0->filechooser), g, clippedText, textX, textY);
			g->setColor($($nc(background)->darker()));
			$SwingUtilities2::drawString(static_cast<$JComponent*>(this->this$0->filechooser), g, clippedText, textX + 1, textY + 1);
		}
	}
}

AquaFileChooserUI$MacFCTableCellRenderer::AquaFileChooserUI$MacFCTableCellRenderer() {
}

$Class* AquaFileChooserUI$MacFCTableCellRenderer::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$MacFCTableCellRenderer, name, initialize, &_AquaFileChooserUI$MacFCTableCellRenderer_ClassInfo_, allocate$AquaFileChooserUI$MacFCTableCellRenderer);
	return class$;
}

$Class* AquaFileChooserUI$MacFCTableCellRenderer::class$ = nullptr;

		} // laf
	} // apple
} // com