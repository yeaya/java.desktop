#include <com/apple/laf/AquaTableHeaderBorder.h>

#include <apple/laf/JRSUIConstants$AlignmentHorizontal.h>
#include <apple/laf/JRSUIConstants$AlignmentVertical.h>
#include <apple/laf/JRSUIConstants$BooleanValue.h>
#include <apple/laf/JRSUIConstants$Direction.h>
#include <apple/laf/JRSUIConstants$Focused.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaTableHeaderBorder$1.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef ACTIVE
#undef BUTTON_BEVEL
#undef BUTTON_LIST_HEADER
#undef DISABLED
#undef DOWN
#undef INACTIVE
#undef LEFT
#undef NO
#undef NONE
#undef SORT_ASCENDING
#undef SORT_DECENDING
#undef SORT_NONE
#undef TOP
#undef UP
#undef YES

using $JRSUIConstants$AlignmentHorizontal = ::apple::laf::JRSUIConstants$AlignmentHorizontal;
using $JRSUIConstants$AlignmentVertical = ::apple::laf::JRSUIConstants$AlignmentVertical;
using $JRSUIConstants$BooleanValue = ::apple::laf::JRSUIConstants$BooleanValue;
using $JRSUIConstants$Direction = ::apple::laf::JRSUIConstants$Direction;
using $JRSUIConstants$Focused = ::apple::laf::JRSUIConstants$Focused;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaTableHeaderBorder$1 = ::com::apple::laf::AquaTableHeaderBorder$1;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JRootPane = ::javax::swing::JRootPane;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTableHeaderBorder_FieldInfo_[] = {
	{"SORT_NONE", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaTableHeaderBorder, SORT_NONE)},
	{"SORT_ASCENDING", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaTableHeaderBorder, SORT_ASCENDING)},
	{"SORT_DECENDING", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AquaTableHeaderBorder, SORT_DECENDING)},
	{"editorBorderInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED | $FINAL, $field(AquaTableHeaderBorder, editorBorderInsets)},
	{"painter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;", $PROTECTED | $FINAL, $field(AquaTableHeaderBorder, painter)},
	{"doPaint", "Z", nullptr, $PROTECTED, $field(AquaTableHeaderBorder, doPaint)},
	{"alternateBorder", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljavax/swing/border/Border;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaTableHeaderBorder, alternateBorder)},
	{"selected", "Z", nullptr, $PRIVATE, $field(AquaTableHeaderBorder, selected)},
	{"fHorizontalShift", "I", nullptr, $PRIVATE, $field(AquaTableHeaderBorder, fHorizontalShift)},
	{"sortOrder", "I", nullptr, $PRIVATE, $field(AquaTableHeaderBorder, sortOrder)},
	{}
};

$MethodInfo _AquaTableHeaderBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AquaTableHeaderBorder::*)()>(&AquaTableHeaderBorder::init$))},
	{"getAlternateBorder", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Border*(*)()>(&AquaTableHeaderBorder::getAlternateBorder))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getListHeaderBorder", "()Lcom/apple/laf/AquaTableHeaderBorder;", nullptr, $PROTECTED | $STATIC, $method(static_cast<AquaTableHeaderBorder*(*)()>(&AquaTableHeaderBorder::getListHeaderBorder))},
	{"getState", "(Ljavax/swing/JComponent;)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"setHorizontalShift", "(I)V", nullptr, $PROTECTED},
	{"setSelected", "(Z)V", nullptr, $PROTECTED},
	{"setSortOrder", "(I)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaTableHeaderBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTableHeaderBorder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTableHeaderBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTableHeaderBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_AquaTableHeaderBorder_FieldInfo_,
	_AquaTableHeaderBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTableHeaderBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTableHeaderBorder$1"
};

$Object* allocate$AquaTableHeaderBorder($Class* clazz) {
	return $of($alloc(AquaTableHeaderBorder));
}

$AquaUtils$RecyclableSingleton* AquaTableHeaderBorder::alternateBorder = nullptr;

AquaTableHeaderBorder* AquaTableHeaderBorder::getListHeaderBorder() {
	$init(AquaTableHeaderBorder);
	return $new(AquaTableHeaderBorder);
}

void AquaTableHeaderBorder::init$() {
	$AbstractBorder::init$();
	$set(this, editorBorderInsets, $new($Insets, 1, 3, 1, 3));
	$set(this, painter, $AquaPainter::create($($JRSUIState::getInstance())));
	this->doPaint = true;
	this->selected = false;
	this->fHorizontalShift = 0;
	this->sortOrder = AquaTableHeaderBorder::SORT_NONE;
	$init($JRSUIConstants$AlignmentHorizontal);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$AlignmentHorizontal::LEFT);
	$init($JRSUIConstants$AlignmentVertical);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$AlignmentVertical::TOP);
}

void AquaTableHeaderBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (!this->doPaint) {
		return;
	}
	$var($JComponent, jc, $cast($JComponent, c));
	$var($Color, componentBackground, $nc(jc)->getBackground());
	if (!($instanceOf($UIResource, componentBackground))) {
		this->doPaint = false;
		jc->paint(g);
		$nc($(getAlternateBorder()))->paintBorder(jc, g, x, y, width, height);
		this->doPaint = true;
		return;
	}
	$var($JRSUIConstants$State, state, getState(jc));
	$nc($nc(this->painter)->state)->set(state);
	$init($JRSUIConstants$Focused);
	$nc($nc(this->painter)->state)->set(jc->hasFocus() ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::NO));
	$init($JRSUIConstants$Widget);
	$nc($nc(this->painter)->state)->set(height > 16 ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Widget::BUTTON_BEVEL) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Widget::BUTTON_LIST_HEADER));
	$init($JRSUIConstants$BooleanValue);
	$nc($nc(this->painter)->state)->set(this->selected ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$BooleanValue::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$BooleanValue::NO));
	switch (this->sortOrder) {
	case AquaTableHeaderBorder::SORT_ASCENDING:
		{
			$init($JRSUIConstants$Direction);
			$nc($nc(this->painter)->state)->set($JRSUIConstants$Direction::UP);
			break;
		}
	case AquaTableHeaderBorder::SORT_DECENDING:
		{
			$init($JRSUIConstants$Direction);
			$nc($nc(this->painter)->state)->set($JRSUIConstants$Direction::DOWN);
			break;
		}
	default:
		{
			$init($JRSUIConstants$Direction);
			$nc($nc(this->painter)->state)->set($JRSUIConstants$Direction::NONE);
			break;
		}
	}
	int32_t newX = x;
	int32_t newY = y;
	int32_t newWidth = width;
	int32_t newHeight = height;
	$nc(this->painter)->paint(g, c, newX - 1, newY - 1, newWidth + 1, newHeight);
	$nc(g)->clipRect(newX, y, newWidth, height);
	g->translate(this->fHorizontalShift, -1);
	this->doPaint = false;
	jc->paint(g);
	this->doPaint = true;
}

$JRSUIConstants$State* AquaTableHeaderBorder::getState($JComponent* jc) {
	if (!$nc(jc)->isEnabled()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::DISABLED;
	}
	$var($JRootPane, rootPane, $nc(jc)->getRootPane());
	if (rootPane == nullptr) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::ACTIVE;
	}
	if (!$AquaFocusHandler::isActive(rootPane)) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

$Border* AquaTableHeaderBorder::getAlternateBorder() {
	$init(AquaTableHeaderBorder);
	return $cast($Border, $nc(AquaTableHeaderBorder::alternateBorder)->get());
}

$Insets* AquaTableHeaderBorder::getBorderInsets($Component* c) {
	return this->editorBorderInsets;
}

$Insets* AquaTableHeaderBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->left = $nc(this->editorBorderInsets)->left;
	insets->top = $nc(this->editorBorderInsets)->top;
	insets->right = $nc(this->editorBorderInsets)->right;
	insets->bottom = $nc(this->editorBorderInsets)->bottom;
	return insets;
}

bool AquaTableHeaderBorder::isBorderOpaque() {
	return false;
}

void AquaTableHeaderBorder::setSelected(bool inSelected) {
	this->selected = inSelected;
}

void AquaTableHeaderBorder::setHorizontalShift(int32_t inShift) {
	this->fHorizontalShift = inShift;
}

void AquaTableHeaderBorder::setSortOrder(int32_t inSortOrder) {
	$useLocalCurrentObjectStackCache();
	if (inSortOrder < AquaTableHeaderBorder::SORT_DECENDING || inSortOrder > AquaTableHeaderBorder::SORT_ASCENDING) {
		$throwNew($IllegalArgumentException, $$str({"Invalid sort order constant: "_s, $$str(inSortOrder)}));
	}
	this->sortOrder = inSortOrder;
}

void clinit$AquaTableHeaderBorder($Class* class$) {
	$assignStatic(AquaTableHeaderBorder::alternateBorder, $new($AquaTableHeaderBorder$1));
}

AquaTableHeaderBorder::AquaTableHeaderBorder() {
}

$Class* AquaTableHeaderBorder::load$($String* name, bool initialize) {
	$loadClass(AquaTableHeaderBorder, name, initialize, &_AquaTableHeaderBorder_ClassInfo_, clinit$AquaTableHeaderBorder, allocate$AquaTableHeaderBorder);
	return class$;
}

$Class* AquaTableHeaderBorder::class$ = nullptr;

		} // laf
	} // apple
} // com