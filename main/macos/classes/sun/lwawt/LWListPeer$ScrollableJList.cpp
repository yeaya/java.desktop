#include <sun/lwawt/LWListPeer$ScrollableJList.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/ItemSelectable.h>
#include <java/awt/List.h>
#include <java/awt/event/ItemEvent.h>
#include <java/util/Arrays.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <sun/lwawt/LWListPeer$ScrollableJList$1.h>
#include <sun/lwawt/LWListPeer$ScrollableJList$JListDelegate.h>
#include <sun/lwawt/LWListPeer.h>
#include <jcpp.h>

#undef DESELECTED
#undef ITEM_STATE_CHANGED
#undef SELECTED
#undef SIMPLE_SCROLL_MODE

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $List = ::java::awt::List;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $LWListPeer = ::sun::lwawt::LWListPeer;
using $LWListPeer$ScrollableJList$1 = ::sun::lwawt::LWListPeer$ScrollableJList$1;
using $LWListPeer$ScrollableJList$JListDelegate = ::sun::lwawt::LWListPeer$ScrollableJList$JListDelegate;

namespace sun {
	namespace lwawt {

$FieldInfo _LWListPeer$ScrollableJList_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/LWListPeer;", nullptr, $FINAL | $SYNTHETIC, $field(LWListPeer$ScrollableJList, this$0)},
	{"skipStateChangedEvent", "Z", nullptr, $PRIVATE, $field(LWListPeer$ScrollableJList, skipStateChangedEvent)},
	{"model", "Ljavax/swing/DefaultListModel;", "Ljavax/swing/DefaultListModel<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(LWListPeer$ScrollableJList, model)},
	{"oldSelectedIndices", "[I", nullptr, $PRIVATE, $field(LWListPeer$ScrollableJList, oldSelectedIndices)},
	{}
};

$MethodInfo _LWListPeer$ScrollableJList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/lwawt/LWListPeer;)V", nullptr, 0, $method(static_cast<void(LWListPeer$ScrollableJList::*)($LWListPeer*)>(&LWListPeer$ScrollableJList::init$))},
	{"getModel", "()Ljavax/swing/DefaultListModel;", "()Ljavax/swing/DefaultListModel<Ljava/lang/String;>;", $PUBLIC, $method(static_cast<$DefaultListModel*(LWListPeer$ScrollableJList::*)()>(&LWListPeer$ScrollableJList::getModel))},
	{"getView", "()Ljavax/swing/JList;", "()Ljavax/swing/JList<Ljava/lang/String;>;", $PUBLIC, $method(static_cast<$JList*(LWListPeer$ScrollableJList::*)()>(&LWListPeer$ScrollableJList::getView))},
	{"isSkipStateChangedEvent", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(LWListPeer$ScrollableJList::*)()>(&LWListPeer$ScrollableJList::isSkipStateChangedEvent))},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setOpaque", "(Z)V", nullptr, $PUBLIC},
	{"setSkipStateChangedEvent", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(LWListPeer$ScrollableJList::*)(bool)>(&LWListPeer$ScrollableJList::setSkipStateChangedEvent))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _LWListPeer$ScrollableJList_InnerClassesInfo_[] = {
	{"sun.lwawt.LWListPeer$ScrollableJList", "sun.lwawt.LWListPeer", "ScrollableJList", $FINAL},
	{"sun.lwawt.LWListPeer$ScrollableJList$JListDelegate", "sun.lwawt.LWListPeer$ScrollableJList", "JListDelegate", $PRIVATE | $FINAL},
	{"sun.lwawt.LWListPeer$ScrollableJList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _LWListPeer$ScrollableJList_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWListPeer$ScrollableJList",
	"javax.swing.JScrollPane",
	"javax.swing.event.ListSelectionListener",
	_LWListPeer$ScrollableJList_FieldInfo_,
	_LWListPeer$ScrollableJList_MethodInfo_,
	nullptr,
	nullptr,
	_LWListPeer$ScrollableJList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWListPeer"
};

$Object* allocate$LWListPeer$ScrollableJList($Class* clazz) {
	return $of($alloc(LWListPeer$ScrollableJList));
}

$String* LWListPeer$ScrollableJList::toString() {
	 return this->$JScrollPane::toString();
}

int32_t LWListPeer$ScrollableJList::hashCode() {
	 return this->$JScrollPane::hashCode();
}

bool LWListPeer$ScrollableJList::equals(Object$* arg0) {
	 return this->$JScrollPane::equals(arg0);
}

$Object* LWListPeer$ScrollableJList::clone() {
	 return this->$JScrollPane::clone();
}

void LWListPeer$ScrollableJList::finalize() {
	this->$JScrollPane::finalize();
}

void LWListPeer$ScrollableJList::init$($LWListPeer* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$JScrollPane::init$();
	$set(this, model, $new($LWListPeer$ScrollableJList$1, this));
	$set(this, oldSelectedIndices, $new($ints, 0));
	$nc($(getViewport()))->setScrollMode($JViewport::SIMPLE_SCROLL_MODE);
	$var($JList, list, $new($LWListPeer$ScrollableJList$JListDelegate, this));
	list->addListSelectionListener(this);
	$nc($(getViewport()))->setView(list);
	$var($StringArray, items, $nc(($cast($List, $(this$0->getTarget()))))->getItems());
	for (int32_t i = 0; i < $nc(items)->length; ++i) {
		$nc(this->model)->add(i, items->get(i));
	}
}

bool LWListPeer$ScrollableJList::isSkipStateChangedEvent() {
	return this->skipStateChangedEvent;
}

void LWListPeer$ScrollableJList::setSkipStateChangedEvent(bool skipStateChangedEvent) {
	this->skipStateChangedEvent = skipStateChangedEvent;
}

void LWListPeer$ScrollableJList::valueChanged($ListSelectionEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc(e)->getValueIsAdjusting();
	if (var$0 && !isSkipStateChangedEvent()) {
		$var($JList, source, $cast($JList, e->getSource()));
		for (int32_t i = 0; i < $nc($($nc(source)->getModel()))->getSize(); ++i) {
			bool wasSelected = $Arrays::binarySearch(this->oldSelectedIndices, i) >= 0;
			bool isSelected = source->isSelectedIndex(i);
			if (wasSelected == isSelected) {
				continue;
			}
			int32_t state = !wasSelected && isSelected ? $ItemEvent::SELECTED : $ItemEvent::DESELECTED;
			$var($ItemSelectable, var$1, $cast($ItemSelectable, this->this$0->getTarget()));
			this->this$0->postEvent($$new($ItemEvent, var$1, $ItemEvent::ITEM_STATE_CHANGED, $($Integer::valueOf(i)), state));
		}
		$set(this, oldSelectedIndices, $nc(source)->getSelectedIndices());
	}
}

$JList* LWListPeer$ScrollableJList::getView() {
	return $cast($JList, $nc($(getViewport()))->getView());
}

$DefaultListModel* LWListPeer$ScrollableJList::getModel() {
	return this->model;
}

void LWListPeer$ScrollableJList::setEnabled(bool enabled) {
	$nc($(getView()))->setEnabled(enabled);
	$JScrollPane::setEnabled(enabled);
}

void LWListPeer$ScrollableJList::setOpaque(bool isOpaque) {
	$JScrollPane::setOpaque(isOpaque);
	if (getView() != nullptr) {
		$nc($(getView()))->setOpaque(isOpaque);
	}
}

void LWListPeer$ScrollableJList::setFont($Font* font) {
	$JScrollPane::setFont(font);
	if (getView() != nullptr) {
		$nc($(getView()))->setFont(font);
		this->this$0->revalidate();
	}
}

LWListPeer$ScrollableJList::LWListPeer$ScrollableJList() {
}

$Class* LWListPeer$ScrollableJList::load$($String* name, bool initialize) {
	$loadClass(LWListPeer$ScrollableJList, name, initialize, &_LWListPeer$ScrollableJList_ClassInfo_, allocate$LWListPeer$ScrollableJList);
	return class$;
}

$Class* LWListPeer$ScrollableJList::class$ = nullptr;

	} // lwawt
} // sun