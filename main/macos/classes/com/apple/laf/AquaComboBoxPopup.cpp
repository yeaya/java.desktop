#include <com/apple/laf/AquaComboBoxPopup.h>

#include <com/apple/laf/AquaComboBoxPopup$1.h>
#include <com/apple/laf/AquaComboBoxUI.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/lang/Math.h>
#include <javax/swing/Box.h>
#include <javax/swing/ComboBoxModel.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

#undef FOCUS_RING_PAD_BOTTOM
#undef FOCUS_RING_PAD_LEFT
#undef FOCUS_RING_PAD_RIGHT
#undef WINDOW_FADE_OUT

using $GraphicsConfigurationArray = $Array<::java::awt::GraphicsConfiguration>;
using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $AquaComboBoxPopup$1 = ::com::apple::laf::AquaComboBoxPopup$1;
using $AquaComboBoxUI = ::com::apple::laf::AquaComboBoxUI;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Box = ::javax::swing::Box;
using $ComboBoxModel = ::javax::swing::ComboBoxModel;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JScrollPane = ::javax::swing::JScrollPane;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaComboBoxPopup_FieldInfo_[] = {
	{"FOCUS_RING_PAD_LEFT", "I", nullptr, $STATIC | $FINAL, $constField(AquaComboBoxPopup, FOCUS_RING_PAD_LEFT)},
	{"FOCUS_RING_PAD_RIGHT", "I", nullptr, $STATIC | $FINAL, $constField(AquaComboBoxPopup, FOCUS_RING_PAD_RIGHT)},
	{"FOCUS_RING_PAD_BOTTOM", "I", nullptr, $STATIC | $FINAL, $constField(AquaComboBoxPopup, FOCUS_RING_PAD_BOTTOM)},
	{"topStrut", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(AquaComboBoxPopup, topStrut)},
	{"bottomStrut", "Ljava/awt/Component;", nullptr, $PROTECTED, $field(AquaComboBoxPopup, bottomStrut)},
	{"isPopDown", "Z", nullptr, $PROTECTED, $field(AquaComboBoxPopup, isPopDown)},
	{}
};

$MethodInfo _AquaComboBoxPopup_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JComboBox;)V", "(Ljavax/swing/JComboBox<Ljava/lang/Object;>;)V", $PUBLIC, $method(static_cast<void(AquaComboBoxPopup::*)($JComboBox*)>(&AquaComboBoxPopup::init$))},
	{"adjustPopupAndGetBounds", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED, $method(static_cast<$Rectangle*(AquaComboBoxPopup::*)()>(&AquaComboBoxPopup::adjustPopupAndGetBounds))},
	{"computePopupBounds", "(IIII)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"computePopupBoundsForMenu", "(IIIIILjava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PROTECTED, $method(static_cast<$Rectangle*(AquaComboBoxPopup::*)(int32_t,int32_t,int32_t,int32_t,int32_t,$Rectangle*)>(&AquaComboBoxPopup::computePopupBoundsForMenu))},
	{"configurePopup", "()V", nullptr, $PROTECTED},
	{"createList", "()Ljavax/swing/JList;", "()Ljavax/swing/JList<Ljava/lang/Object;>;", $PROTECTED},
	{"getAvailableScreenArea", "(Ljava/awt/Rectangle;Ljava/awt/GraphicsConfiguration;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(AquaComboBoxPopup::*)($Rectangle*,$GraphicsConfiguration*)>(&AquaComboBoxPopup::getAvailableScreenArea))},
	{"getBestPopupSizeForRowCount", "(I)Ljava/awt/Dimension;", nullptr, $PROTECTED, $method(static_cast<$Dimension*(AquaComboBoxPopup::*)(int32_t)>(&AquaComboBoxPopup::getBestPopupSizeForRowCount))},
	{"getBestScreenBounds", "(Ljava/awt/Point;)Ljava/awt/Rectangle;", nullptr, 0, $method(static_cast<$Rectangle*(AquaComboBoxPopup::*)($Point*)>(&AquaComboBoxPopup::getBestScreenBounds))},
	{"getComboBoxEdge", "(IZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(AquaComboBoxPopup::*)(int32_t,bool)>(&AquaComboBoxPopup::getComboBoxEdge))},
	{"isPopdown", "()Z", nullptr, $PROTECTED, $method(static_cast<bool(AquaComboBoxPopup::*)()>(&AquaComboBoxPopup::isPopdown))},
	{"shouldScroll", "()Z", nullptr, $PROTECTED, $method(static_cast<bool(AquaComboBoxPopup::*)()>(&AquaComboBoxPopup::shouldScroll))},
	{"show", "()V", nullptr, $PUBLIC},
	{"updateContents", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(AquaComboBoxPopup::*)(bool)>(&AquaComboBoxPopup::updateContents))},
	{}
};

$InnerClassInfo _AquaComboBoxPopup_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaComboBoxPopup$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaComboBoxPopup_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.apple.laf.AquaComboBoxPopup",
	"javax.swing.plaf.basic.BasicComboPopup",
	nullptr,
	_AquaComboBoxPopup_FieldInfo_,
	_AquaComboBoxPopup_MethodInfo_,
	nullptr,
	nullptr,
	_AquaComboBoxPopup_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaComboBoxPopup$1"
};

$Object* allocate$AquaComboBoxPopup($Class* clazz) {
	return $of($alloc(AquaComboBoxPopup));
}

void AquaComboBoxPopup::init$($JComboBox* cBox) {
	$BasicComboPopup::init$(cBox);
	this->isPopDown = false;
}

void AquaComboBoxPopup::configurePopup() {
	$BasicComboPopup::configurePopup();
	setBorderPainted(false);
	setBorder(nullptr);
	updateContents(false);
	$init($CPlatformWindow);
	putClientProperty($CPlatformWindow::WINDOW_FADE_OUT, $($Integer::valueOf(150)));
}

void AquaComboBoxPopup::updateContents(bool remove) {
	this->isPopDown = isPopdown();
	if (this->isPopDown) {
		if (remove) {
			if (this->topStrut != nullptr) {
				this->remove(this->topStrut);
			}
			if (this->bottomStrut != nullptr) {
				this->remove(this->bottomStrut);
			}
		} else {
			add(static_cast<$Component*>(this->scroller));
		}
	} else {
		if (this->topStrut == nullptr) {
			$set(this, topStrut, $Box::createVerticalStrut(4));
			$set(this, bottomStrut, $Box::createVerticalStrut(4));
		}
		if (remove) {
			this->remove(static_cast<$Component*>(this->scroller));
		}
		this->add(this->topStrut);
		this->add(static_cast<$Component*>(this->scroller));
		this->add(this->bottomStrut);
	}
}

$Dimension* AquaComboBoxPopup::getBestPopupSizeForRowCount(int32_t maxRowCount) {
	$useLocalCurrentObjectStackCache();
	int32_t currentElementCount = $nc($($nc(this->comboBox)->getModel()))->getSize();
	int32_t rowCount = $Math::min(maxRowCount, currentElementCount);
	$var($Dimension, popupSize, $new($Dimension));
	$var($ListCellRenderer, renderer, $nc(this->list$)->getCellRenderer());
	for (int32_t i = 0; i < rowCount; ++i) {
		$var($Object, value, $nc($($nc(this->list$)->getModel()))->getElementAt(i));
		$var($Component, c, $nc(renderer)->getListCellRendererComponent(this->list$, value, i, false, false));
		$var($Dimension, prefSize, $nc(c)->getPreferredSize());
		popupSize->height += $nc(prefSize)->height;
		popupSize->width = $Math::max(prefSize->width, popupSize->width);
	}
	popupSize->width += 10;
	return popupSize;
}

bool AquaComboBoxPopup::shouldScroll() {
	int32_t var$0 = $nc(this->comboBox)->getItemCount();
	return var$0 > $nc(this->comboBox)->getMaximumRowCount();
}

bool AquaComboBoxPopup::isPopdown() {
	bool var$0 = shouldScroll();
	return var$0 || $AquaComboBoxUI::isPopdown(this->comboBox);
}

void AquaComboBoxPopup::show() {
	$useLocalCurrentObjectStackCache();
	int32_t startItemCount = $nc(this->comboBox)->getItemCount();
	$var($Rectangle, popupBounds, adjustPopupAndGetBounds());
	if (popupBounds == nullptr) {
		return;
	}
	$nc(this->comboBox)->firePopupMenuWillBecomeVisible();
	show(this->comboBox, $nc(popupBounds)->x, popupBounds->y);
	int32_t afterShowItemCount = $nc(this->comboBox)->getItemCount();
	if (afterShowItemCount == 0) {
		hide();
		return;
	}
	if (startItemCount != afterShowItemCount) {
		$var($Rectangle, newBounds, adjustPopupAndGetBounds());
		$nc(this->list$)->setSize($nc(newBounds)->width, newBounds->height);
		pack();
		$var($Point, newLoc, $nc(this->comboBox)->getLocationOnScreen());
		setLocation($nc(newLoc)->x + $nc(newBounds)->x, newLoc->y + newBounds->y);
	}
	$nc(this->list$)->requestFocusInWindow();
}

$JList* AquaComboBoxPopup::createList() {
	return $new($AquaComboBoxPopup$1, this, $($nc(this->comboBox)->getModel()));
}

$Rectangle* AquaComboBoxPopup::adjustPopupAndGetBounds() {
	$useLocalCurrentObjectStackCache();
	if (this->isPopDown != isPopdown()) {
		updateContents(true);
	}
	$var($Dimension, popupSize, getBestPopupSizeForRowCount($nc(this->comboBox)->getMaximumRowCount()));
	$var($Rectangle, popupBounds, computePopupBounds(0, $nc($($nc(this->comboBox)->getBounds()))->height, $nc(popupSize)->width, popupSize->height));
	if (popupBounds == nullptr) {
		return nullptr;
	}
	$var($Dimension, realPopupSize, $nc(popupBounds)->getSize());
	$nc(this->scroller)->setMaximumSize(realPopupSize);
	$nc(this->scroller)->setPreferredSize(realPopupSize);
	$nc(this->scroller)->setMinimumSize(realPopupSize);
	$nc(this->list$)->invalidate();
	int32_t selectedIndex = $nc(this->comboBox)->getSelectedIndex();
	if (selectedIndex == -1) {
		$nc(this->list$)->clearSelection();
	} else {
		$nc(this->list$)->setSelectedIndex(selectedIndex);
	}
	$nc(this->list$)->ensureIndexIsVisible($nc(this->list$)->getSelectedIndex());
	return popupBounds;
}

$Rectangle* AquaComboBoxPopup::getBestScreenBounds($Point* p) {
	$useLocalCurrentObjectStackCache();
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDeviceArray, gs, $nc(ge)->getScreenDevices());
	{
		$var($GraphicsDeviceArray, arr$, gs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GraphicsDevice, gd, arr$->get(i$));
			{
				$var($GraphicsConfigurationArray, gc, $nc(gd)->getConfigurations());
				{
					$var($GraphicsConfigurationArray, arr$, gc);
					int32_t len$ = arr$->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($GraphicsConfiguration, element0, arr$->get(i$));
						{
							$var($Rectangle, gcBounds, $nc(element0)->getBounds());
							if ($nc(gcBounds)->contains(p)) {
								return getAvailableScreenArea(gcBounds, element0);
							}
						}
					}
				}
			}
		}
	}
	$var($Rectangle, comboBoxBounds, $nc(this->comboBox)->getBounds());
	$nc(comboBoxBounds)->setLocation(p);
	{
		$var($GraphicsDeviceArray, arr$, gs);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($GraphicsDevice, gd, arr$->get(i$));
			{
				$var($GraphicsConfigurationArray, gc, $nc(gd)->getConfigurations());
				{
					$var($GraphicsConfigurationArray, arr$, gc);
					int32_t len$ = $nc(arr$)->length;
					int32_t i$ = 0;
					for (; i$ < len$; ++i$) {
						$var($GraphicsConfiguration, element0, arr$->get(i$));
						{
							$var($Rectangle, gcBounds, $nc(element0)->getBounds());
							if ($nc(gcBounds)->intersects(comboBoxBounds)) {
								return getAvailableScreenArea(gcBounds, element0);
							}
						}
					}
				}
			}
		}
	}
	return nullptr;
}

$Rectangle* AquaComboBoxPopup::getAvailableScreenArea($Rectangle* bounds, $GraphicsConfiguration* gc) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, $nc($($Toolkit::getDefaultToolkit()))->getScreenInsets(gc));
	return $new($Rectangle, $nc(bounds)->x + $nc(insets)->left, bounds->y + insets->top, bounds->width - insets->left - insets->right, bounds->height - insets->top - insets->bottom);
}

int32_t AquaComboBoxPopup::getComboBoxEdge(int32_t py, bool bottom) {
	int32_t offset = bottom ? 9 : -9;
	return $Math::min((py / 2) + offset, py);
}

$Rectangle* AquaComboBoxPopup::computePopupBounds(int32_t px, int32_t py, int32_t pw, int32_t ph) {
	$useLocalCurrentObjectStackCache();
	int32_t itemCount = $nc($($nc(this->comboBox)->getModel()))->getSize();
	bool isPopdown = this->isPopdown();
	bool isTableCellEditor = $AquaComboBoxUI::isTableCellEditor(this->comboBox);
	if (isPopdown && !isTableCellEditor) {
		py = getComboBoxEdge(py, true);
	}
	$var($Point, p, $new($Point, 0, 0));
	$SwingUtilities::convertPointToScreen(p, this->comboBox);
	$var($Rectangle, scrBounds, getBestScreenBounds(p));
	if (scrBounds == nullptr) {
		return $BasicComboPopup::computePopupBounds(px, py, pw, ph);
	}
	$var($Insets, comboBoxInsets, $nc(this->comboBox)->getInsets());
	$var($Rectangle, comboBoxBounds, $nc(this->comboBox)->getBounds());
	if (shouldScroll()) {
		pw += 15;
	}
	if (isPopdown) {
		pw += 4;
	}
	int32_t minWidth = $nc(comboBoxBounds)->width - ($nc(comboBoxInsets)->left + comboBoxInsets->right);
	pw = $Math::max(minWidth, pw);
	bool leftToRight = $AquaUtils::isLeftToRight(this->comboBox);
	if (leftToRight) {
		px += comboBoxInsets->left;
		if (!this->isPopDown) {
			px -= AquaComboBoxPopup::FOCUS_RING_PAD_LEFT;
		}
	} else {
		px = comboBoxBounds->width - pw - comboBoxInsets->right;
		if (!this->isPopDown) {
			px += AquaComboBoxPopup::FOCUS_RING_PAD_RIGHT;
		}
	}
	py -= (comboBoxInsets->bottom);
	p->x += px;
	p->y += py;
	if (p->x < $nc(scrBounds)->x) {
		px = px + (scrBounds->x - p->x);
	}
	if (p->y < $nc(scrBounds)->y) {
		py = py + (scrBounds->y - p->y);
	}
	$var($Point, top, $new($Point, 0, 0));
	$SwingUtilities::convertPointFromScreen(top, this->comboBox);
	int32_t maxWidth = $Math::min($nc(scrBounds)->width, top->x + scrBounds->x + scrBounds->width) - 2;
	pw = $Math::min(maxWidth, pw);
	if (pw < minWidth) {
		px -= (minWidth - pw);
		pw = minWidth;
	}
	if (!isPopdown) {
		pw -= 6;
		return computePopupBoundsForMenu(px, py, pw, ph, itemCount, scrBounds);
	}
	if (!isTableCellEditor) {
		pw -= (AquaComboBoxPopup::FOCUS_RING_PAD_LEFT + AquaComboBoxPopup::FOCUS_RING_PAD_RIGHT);
		if (leftToRight) {
			px += AquaComboBoxPopup::FOCUS_RING_PAD_LEFT;
		}
	}
	$var($Rectangle, r, $new($Rectangle, px, py, pw, ph));
	if (r->y + r->height < top->y + $nc(scrBounds)->y + scrBounds->height) {
		return r;
	}
	int32_t newY = getComboBoxEdge(comboBoxBounds->height, false) - ph - comboBoxInsets->top;
	if (newY > top->y + $nc(scrBounds)->y) {
		return $new($Rectangle, px, newY, r->width, r->height);
	} else {
		r->y = top->y + scrBounds->y + $Math::max(0, (scrBounds->height - ph) / 2);
		r->height = $Math::min(scrBounds->height, ph);
	}
	return r;
}

$Rectangle* AquaComboBoxPopup::computePopupBoundsForMenu(int32_t px, int32_t py, int32_t pw, int32_t ph, int32_t itemCount, $Rectangle* scrBounds) {
	$useLocalCurrentObjectStackCache();
	int32_t elementSize = 0;
	if (this->list$ != nullptr && itemCount > 0) {
		$var($Rectangle, cellBounds, $nc(this->list$)->getCellBounds(0, 0));
		if (cellBounds != nullptr) {
			elementSize = cellBounds->height;
		}
	}
	int32_t offsetIndex = $nc(this->comboBox)->getSelectedIndex();
	if (offsetIndex < 0) {
		offsetIndex = 0;
	}
	$nc(this->list$)->setSelectedIndex(offsetIndex);
	int32_t selectedLocation = elementSize * offsetIndex;
	$var($Point, top, $new($Point, 0, $nc(scrBounds)->y));
	$var($Point, bottom, $new($Point, 0, $nc(scrBounds)->y + scrBounds->height - 20));
	$SwingUtilities::convertPointFromScreen(top, this->comboBox);
	$SwingUtilities::convertPointFromScreen(bottom, this->comboBox);
	$var($Rectangle, popupBounds, $new($Rectangle, px, py, pw, ph));
	int32_t theRest = ph - selectedLocation;
	bool extendsOffscreenAtTop = selectedLocation > -top->y;
	bool extendsOffscreenAtBottom = theRest > bottom->y;
	if (extendsOffscreenAtTop) {
		popupBounds->y = top->y + 1;
		popupBounds->y = ($div(popupBounds->y, elementSize)) * elementSize;
	} else if (extendsOffscreenAtBottom) {
		popupBounds->y = bottom->y - popupBounds->height;
	} else {
		popupBounds->y = -selectedLocation;
	}
	int32_t height = $nc(this->comboBox)->getHeight();
	$var($Insets, insets, $nc(this->comboBox)->getInsets());
	int32_t buttonSize = height - ($nc(insets)->top + insets->bottom);
	int32_t diff = (buttonSize - elementSize) / 2 + insets->top;
	popupBounds->y += diff - AquaComboBoxPopup::FOCUS_RING_PAD_BOTTOM;
	return popupBounds;
}

AquaComboBoxPopup::AquaComboBoxPopup() {
}

$Class* AquaComboBoxPopup::load$($String* name, bool initialize) {
	$loadClass(AquaComboBoxPopup, name, initialize, &_AquaComboBoxPopup_ClassInfo_, allocate$AquaComboBoxPopup);
	return class$;
}

$Class* AquaComboBoxPopup::class$ = nullptr;

		} // laf
	} // apple
} // com