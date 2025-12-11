#include <javax/swing/colorchooser/DefaultPreviewPanel.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/util/Locale.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DIALOG
#undef PLAIN

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace colorchooser {

$FieldInfo _DefaultPreviewPanel_FieldInfo_[] = {
	{"squareSize", "I", nullptr, $PRIVATE, $field(DefaultPreviewPanel, squareSize)},
	{"squareGap", "I", nullptr, $PRIVATE, $field(DefaultPreviewPanel, squareGap)},
	{"innerGap", "I", nullptr, $PRIVATE, $field(DefaultPreviewPanel, innerGap)},
	{"textGap", "I", nullptr, $PRIVATE, $field(DefaultPreviewPanel, textGap)},
	{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(DefaultPreviewPanel, font)},
	{"sampleText", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DefaultPreviewPanel, sampleText)},
	{"swatchWidth", "I", nullptr, $PRIVATE, $field(DefaultPreviewPanel, swatchWidth)},
	{"oldColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DefaultPreviewPanel, oldColor)},
	{}
};

$MethodInfo _DefaultPreviewPanel_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultPreviewPanel::*)()>(&DefaultPreviewPanel::init$))},
	{"getColorChooser", "()Ljavax/swing/JColorChooser;", nullptr, $PRIVATE, $method(static_cast<$JColorChooser*(DefaultPreviewPanel::*)()>(&DefaultPreviewPanel::getColorChooser))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSampleText", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DefaultPreviewPanel::*)()>(&DefaultPreviewPanel::getSampleText))},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintSquares", "(Ljava/awt/Graphics;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultPreviewPanel::*)($Graphics*,int32_t)>(&DefaultPreviewPanel::paintSquares))},
	{"paintSwatch", "(Ljava/awt/Graphics;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultPreviewPanel::*)($Graphics*,int32_t)>(&DefaultPreviewPanel::paintSwatch))},
	{"paintText", "(Ljava/awt/Graphics;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(DefaultPreviewPanel::*)($Graphics*,int32_t)>(&DefaultPreviewPanel::paintText))},
	{}
};

$ClassInfo _DefaultPreviewPanel_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.DefaultPreviewPanel",
	"javax.swing.JPanel",
	nullptr,
	_DefaultPreviewPanel_FieldInfo_,
	_DefaultPreviewPanel_MethodInfo_
};

$Object* allocate$DefaultPreviewPanel($Class* clazz) {
	return $of($alloc(DefaultPreviewPanel));
}

void DefaultPreviewPanel::init$() {
	$JPanel::init$();
	this->squareSize = 25;
	this->squareGap = 5;
	this->innerGap = 5;
	this->textGap = 5;
	$init($Font);
	$set(this, font, $new($Font, $Font::DIALOG, $Font::PLAIN, 12));
	this->swatchWidth = 50;
	$set(this, oldColor, nullptr);
}

$JColorChooser* DefaultPreviewPanel::getColorChooser() {
	$load($JColorChooser);
	return $cast($JColorChooser, $SwingUtilities::getAncestorOfClass($JColorChooser::class$, this));
}

$Dimension* DefaultPreviewPanel::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, host, getColorChooser());
	if (host == nullptr) {
		$assign(host, this);
	}
	$var($FontMetrics, fm, $nc(host)->getFontMetrics($(getFont())));
	int32_t ascent = $nc(fm)->getAscent();
	int32_t height = fm->getHeight();
	int32_t width = $SwingUtilities2::stringWidth(host, fm, $(getSampleText()));
	int32_t y = height * 3 + this->textGap * 3;
	int32_t x = this->squareSize * 3 + this->squareGap * 2 + this->swatchWidth + width + this->textGap * 3;
	return $new($Dimension, x, y);
}

void DefaultPreviewPanel::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (this->oldColor == nullptr) {
		$set(this, oldColor, getForeground());
	}
	$nc(g)->setColor($(getBackground()));
	int32_t var$0 = getWidth();
	g->fillRect(0, 0, var$0, getHeight());
	if ($nc($(this->getComponentOrientation()))->isLeftToRight()) {
		int32_t squareWidth = paintSquares(g, 0);
		int32_t textWidth = paintText(g, squareWidth);
		paintSwatch(g, squareWidth + textWidth);
	} else {
		int32_t swatchWidth = paintSwatch(g, 0);
		int32_t textWidth = paintText(g, swatchWidth);
		paintSquares(g, swatchWidth + textWidth);
	}
}

int32_t DefaultPreviewPanel::paintSwatch($Graphics* g, int32_t offsetX) {
	int32_t swatchX = offsetX;
	$nc(g)->setColor(this->oldColor);
	g->fillRect(swatchX, 0, this->swatchWidth, (this->squareSize) + (this->squareGap / 2));
	g->setColor($(getForeground()));
	g->fillRect(swatchX, (this->squareSize) + (this->squareGap / 2), this->swatchWidth, (this->squareSize) + (this->squareGap / 2));
	return (swatchX + this->swatchWidth);
}

int32_t DefaultPreviewPanel::paintText($Graphics* g, int32_t offsetX) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setFont($(getFont()));
	$var($JComponent, host, getColorChooser());
	if (host == nullptr) {
		$assign(host, this);
	}
	$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(host, g));
	int32_t ascent = $nc(fm)->getAscent();
	int32_t height = fm->getHeight();
	int32_t width = $SwingUtilities2::stringWidth(host, fm, $(getSampleText()));
	int32_t textXOffset = offsetX + this->textGap;
	$var($Color, color, getForeground());
	g->setColor(color);
	$SwingUtilities2::drawString(host, g, $(getSampleText()), textXOffset + (this->textGap / 2), ascent + 2);
	g->fillRect(textXOffset, (height) + this->textGap, width + (this->textGap), height + 2);
	$init($Color);
	g->setColor($Color::black);
	$SwingUtilities2::drawString(host, g, $(getSampleText()), textXOffset + (this->textGap / 2), height + ascent + this->textGap + 2);
	g->setColor($Color::white);
	g->fillRect(textXOffset, (height + this->textGap) * 2, width + (this->textGap), height + 2);
	g->setColor(color);
	$SwingUtilities2::drawString(host, g, $(getSampleText()), textXOffset + (this->textGap / 2), ((height + this->textGap) * 2) + ascent + 2);
	return width + this->textGap * 3;
}

int32_t DefaultPreviewPanel::paintSquares($Graphics* g, int32_t offsetX) {
	int32_t squareXOffset = offsetX;
	$var($Color, color, getForeground());
	$init($Color);
	$nc(g)->setColor($Color::white);
	g->fillRect(squareXOffset, 0, this->squareSize, this->squareSize);
	g->setColor(color);
	g->fillRect(squareXOffset + this->innerGap, this->innerGap, this->squareSize - (this->innerGap * 2), this->squareSize - (this->innerGap * 2));
	g->setColor($Color::white);
	g->fillRect(squareXOffset + this->innerGap * 2, this->innerGap * 2, this->squareSize - (this->innerGap * 4), this->squareSize - (this->innerGap * 4));
	g->setColor(color);
	g->fillRect(squareXOffset, this->squareSize + this->squareGap, this->squareSize, this->squareSize);
	g->translate(this->squareSize + this->squareGap, 0);
	g->setColor($Color::black);
	g->fillRect(squareXOffset, 0, this->squareSize, this->squareSize);
	g->setColor(color);
	g->fillRect(squareXOffset + this->innerGap, this->innerGap, this->squareSize - (this->innerGap * 2), this->squareSize - (this->innerGap * 2));
	g->setColor($Color::white);
	g->fillRect(squareXOffset + this->innerGap * 2, this->innerGap * 2, this->squareSize - (this->innerGap * 4), this->squareSize - (this->innerGap * 4));
	g->translate(-(this->squareSize + this->squareGap), 0);
	g->translate(this->squareSize + this->squareGap, this->squareSize + this->squareGap);
	g->setColor($Color::white);
	g->fillRect(squareXOffset, 0, this->squareSize, this->squareSize);
	g->setColor(color);
	g->fillRect(squareXOffset + this->innerGap, this->innerGap, this->squareSize - (this->innerGap * 2), this->squareSize - (this->innerGap * 2));
	g->translate(-(this->squareSize + this->squareGap), -(this->squareSize + this->squareGap));
	g->translate((this->squareSize + this->squareGap) * 2, 0);
	g->setColor($Color::white);
	g->fillRect(squareXOffset, 0, this->squareSize, this->squareSize);
	g->setColor(color);
	g->fillRect(squareXOffset + this->innerGap, this->innerGap, this->squareSize - (this->innerGap * 2), this->squareSize - (this->innerGap * 2));
	g->setColor($Color::black);
	g->fillRect(squareXOffset + this->innerGap * 2, this->innerGap * 2, this->squareSize - (this->innerGap * 4), this->squareSize - (this->innerGap * 4));
	g->translate(-((this->squareSize + this->squareGap) * 2), 0);
	g->translate((this->squareSize + this->squareGap) * 2, (this->squareSize + this->squareGap));
	g->setColor($Color::black);
	g->fillRect(squareXOffset, 0, this->squareSize, this->squareSize);
	g->setColor(color);
	g->fillRect(squareXOffset + this->innerGap, this->innerGap, this->squareSize - (this->innerGap * 2), this->squareSize - (this->innerGap * 2));
	g->translate(-((this->squareSize + this->squareGap) * 2), -(this->squareSize + this->squareGap));
	return (this->squareSize * 3 + this->squareGap * 2);
}

$String* DefaultPreviewPanel::getSampleText() {
	if (this->sampleText == nullptr) {
		$set(this, sampleText, $UIManager::getString($of("ColorChooser.sampleText"_s), $(getLocale())));
	}
	return this->sampleText;
}

DefaultPreviewPanel::DefaultPreviewPanel() {
}

$Class* DefaultPreviewPanel::load$($String* name, bool initialize) {
	$loadClass(DefaultPreviewPanel, name, initialize, &_DefaultPreviewPanel_ClassInfo_, allocate$DefaultPreviewPanel);
	return class$;
}

$Class* DefaultPreviewPanel::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax