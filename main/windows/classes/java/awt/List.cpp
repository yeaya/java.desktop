#include <java/awt/List.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/AWTEventMulticaster.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/List$AccessibleAWTList.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemEvent.h>
#include <java/awt/event/ItemListener.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ListPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventListener.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef ACTION_EVENT_MASK
#undef ACTION_PERFORMED
#undef DEFAULT_VISIBLE_ROWS
#undef ITEM_EVENT_MASK
#undef ITEM_STATE_CHANGED

using $ActionListenerArray = $Array<::java::awt::event::ActionListener>;
using $ItemListenerArray = $Array<::java::awt::event::ItemListener>;
using $EventListenerArray = $Array<::java::util::EventListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventMulticaster = ::java::awt::AWTEventMulticaster;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Dimension = ::java::awt::Dimension;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ItemSelectable = ::java::awt::ItemSelectable;
using $List$AccessibleAWTList = ::java::awt::List$AccessibleAWTList;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ItemListener = ::java::awt::event::ItemListener;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ListPeer = ::java::awt::peer::ListPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$CompoundAttribute _List_MethodAnnotations_addItem6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_addItem7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_allowsMultipleSelections10[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_clear11[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_countItems13[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_delItem14[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_delItems15[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_isSelected39[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_minimumSize41[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_minimumSize42[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_preferredSize44[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_preferredSize45[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _List_MethodAnnotations_setMultipleSelections59[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _List_FieldInfo_[] = {
	{"items", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", 0, $field(List, items)},
	{"rows", "I", nullptr, 0, $field(List, rows)},
	{"multipleMode", "Z", nullptr, 0, $field(List, multipleMode)},
	{"selected", "[I", nullptr, 0, $field(List, selected)},
	{"visibleIndex", "I", nullptr, 0, $field(List, visibleIndex)},
	{"actionListener", "Ljava/awt/event/ActionListener;", nullptr, $TRANSIENT, $field(List, actionListener)},
	{"itemListener", "Ljava/awt/event/ItemListener;", nullptr, $TRANSIENT, $field(List, itemListener)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(List, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(List, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(List, serialVersionUID)},
	{"DEFAULT_VISIBLE_ROWS", "I", nullptr, $STATIC | $FINAL, $constField(List, DEFAULT_VISIBLE_ROWS)},
	{"listSerializedDataVersion", "I", nullptr, $PRIVATE, $field(List, listSerializedDataVersion)},
	{}
};

$MethodInfo _List_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(List::*)()>(&List::init$)), "java.awt.HeadlessException"},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(List::*)(int32_t)>(&List::init$)), "java.awt.HeadlessException"},
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(static_cast<void(List::*)(int32_t,bool)>(&List::init$)), "java.awt.HeadlessException"},
	{"add", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"add", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"addActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addItem", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_addItem6},
	{"addItem", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_addItem7},
	{"addItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"allowsMultipleSelections", "()Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_allowsMultipleSelections10},
	{"clear", "()V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_clear11},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"countItems", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_countItems13},
	{"delItem", "(I)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_delItem14},
	{"delItems", "(II)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_delItems15},
	{"deselect", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"eventEnabled", "(Ljava/awt/AWTEvent;)Z", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getActionListeners", "()[Ljava/awt/event/ActionListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getItem", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getItemCount", "()I", nullptr, $PUBLIC},
	{"getItemImpl", "(I)Ljava/lang/String;", nullptr, $FINAL, $method(static_cast<$String*(List::*)(int32_t)>(&List::getItemImpl))},
	{"getItemListeners", "()[Ljava/awt/event/ItemListener;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getItems", "()[Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC},
	{"getMinimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getRows", "()I", nullptr, $PUBLIC},
	{"getSelectedIndex", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSelectedIndexes", "()[I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSelectedItem", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSelectedItems", "()[Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getSelectedObjects", "()[Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getVisibleIndex", "()I", nullptr, $PUBLIC},
	{"isIndexSelected", "(I)Z", nullptr, $PUBLIC},
	{"isMultipleMode", "()Z", nullptr, $PUBLIC},
	{"isSelected", "(I)Z", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_isSelected39},
	{"makeVisible", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"minimumSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_minimumSize41},
	{"minimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_minimumSize42},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"preferredSize", "(I)Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_preferredSize44},
	{"preferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_preferredSize45},
	{"processActionEvent", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PROTECTED},
	{"processEvent", "(Ljava/awt/AWTEvent;)V", nullptr, $PROTECTED},
	{"processItemEvent", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(List::*)($ObjectInputStream*)>(&List::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"remove", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"remove", "(I)V", nullptr, $PUBLIC},
	{"removeActionListener", "(Ljava/awt/event/ActionListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeAll", "()V", nullptr, $PUBLIC},
	{"removeItemListener", "(Ljava/awt/event/ItemListener;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"replaceItem", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"select", "(I)V", nullptr, $PUBLIC},
	{"setMultipleMode", "(Z)V", nullptr, $PUBLIC},
	{"setMultipleSelections", "(Z)V", nullptr, $PUBLIC | $SYNCHRONIZED | $DEPRECATED, nullptr, nullptr, nullptr, _List_MethodAnnotations_setMultipleSelections59},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(List::*)($ObjectOutputStream*)>(&List::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _List_InnerClassesInfo_[] = {
	{"java.awt.List$AccessibleAWTList", "java.awt.List", "AccessibleAWTList", $PROTECTED},
	{}
};

$ClassInfo _List_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.List",
	"java.awt.Component",
	"java.awt.ItemSelectable,javax.accessibility.Accessible",
	_List_FieldInfo_,
	_List_MethodInfo_,
	nullptr,
	nullptr,
	_List_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.List$AccessibleAWTList,java.awt.List$AccessibleAWTList$AccessibleAWTListChild"
};

$Object* allocate$List($Class* clazz) {
	return $of($alloc(List));
}

$String* List::toString() {
	 return this->$Component::toString();
}

int32_t List::hashCode() {
	 return this->$Component::hashCode();
}

bool List::equals(Object$* arg0) {
	 return this->$Component::equals(arg0);
}

$Object* List::clone() {
	 return this->$Component::clone();
}

void List::finalize() {
	this->$Component::finalize();
}

$String* List::base = nullptr;
int32_t List::nameCounter = 0;

void List::init$() {
	List::init$(0, false);
}

void List::init$(int32_t rows) {
	List::init$(rows, false);
}

void List::init$(int32_t rows, bool multipleMode) {
	$Component::init$();
	$set(this, items, $new($Vector));
	this->rows = 0;
	this->multipleMode = false;
	$set(this, selected, $new($ints, 0));
	this->visibleIndex = -1;
	this->listSerializedDataVersion = 1;
	$GraphicsEnvironment::checkHeadless();
	this->rows = (rows != 0) ? rows : List::DEFAULT_VISIBLE_ROWS;
	this->multipleMode = multipleMode;
}

$String* List::constructComponentName() {
	$synchronized(List::class$) {
		$var($String, var$0, List::base);
		return $concat(var$0, $$str(List::nameCounter++));
	}
}

void List::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createList(this));
		}
		$Component::addNotify();
	}
}

void List::removeNotify() {
	$synchronized(getTreeLock()) {
		$var($ListPeer, peer, $cast($ListPeer, this->peer));
		if (peer != nullptr) {
			$set(this, selected, peer->getSelectedIndexes());
		}
		$Component::removeNotify();
	}
}

int32_t List::getItemCount() {
	return countItems();
}

int32_t List::countItems() {
	return $nc(this->items)->size();
}

$String* List::getItem(int32_t index) {
	return getItemImpl(index);
}

$String* List::getItemImpl(int32_t index) {
	return $cast($String, $nc(this->items)->elementAt(index));
}

$StringArray* List::getItems() {
	$synchronized(this) {
		$var($StringArray, itemCopies, $new($StringArray, $nc(this->items)->size()));
		$nc(this->items)->copyInto(itemCopies);
		return itemCopies;
	}
}

void List::add($String* item) {
	addItem(item);
}

void List::addItem($String* item) {
	addItem(item, -1);
}

void List::add($String* item, int32_t index) {
	addItem(item, index);
}

void List::addItem($String* item$renamed, int32_t index) {
	$synchronized(this) {
		$var($String, item, item$renamed);
		if (index < -1 || index >= $nc(this->items)->size()) {
			index = -1;
		}
		if (item == nullptr) {
			$assign(item, ""_s);
		}
		if (index == -1) {
			$nc(this->items)->addElement(item);
		} else {
			$nc(this->items)->insertElementAt(item, index);
		}
		$var($ListPeer, peer, $cast($ListPeer, this->peer));
		if (peer != nullptr) {
			peer->add(item, index);
		}
	}
}

void List::replaceItem($String* newValue, int32_t index) {
	$synchronized(this) {
		remove(index);
		add(newValue, index);
	}
}

void List::removeAll() {
	clear();
}

void List::clear() {
	$synchronized(this) {
		$var($ListPeer, peer, $cast($ListPeer, this->peer));
		if (peer != nullptr) {
			peer->removeAll();
		}
		$set(this, items, $new($Vector));
		$set(this, selected, $new($ints, 0));
	}
}

void List::remove($String* item) {
	$synchronized(this) {
		int32_t index = $nc(this->items)->indexOf(item);
		if (index < 0) {
			$throwNew($IllegalArgumentException, $$str({"item "_s, item, " not found in list"_s}));
		} else {
			remove(index);
		}
	}
}

void List::remove(int32_t position) {
	delItem(position);
}

void List::delItem(int32_t position) {
	delItems(position, position);
}

int32_t List::getSelectedIndex() {
	$synchronized(this) {
		$var($ints, sel, getSelectedIndexes());
		return ($nc(sel)->length == 1) ? $nc(sel)->get(0) : -1;
	}
}

$ints* List::getSelectedIndexes() {
	$synchronized(this) {
		$var($ListPeer, peer, $cast($ListPeer, this->peer));
		if (peer != nullptr) {
			$set(this, selected, peer->getSelectedIndexes());
		}
		return $cast($ints, $nc(this->selected)->clone());
	}
}

$String* List::getSelectedItem() {
	$synchronized(this) {
		int32_t index = getSelectedIndex();
		return (index < 0) ? ($String*)nullptr : getItem(index);
	}
}

$StringArray* List::getSelectedItems() {
	$synchronized(this) {
		$var($ints, sel, getSelectedIndexes());
		$var($StringArray, str, $new($StringArray, $nc(sel)->length));
		for (int32_t i = 0; i < sel->length; ++i) {
			str->set(i, $(getItem(sel->get(i))));
		}
		return str;
	}
}

$ObjectArray* List::getSelectedObjects() {
	return getSelectedItems();
}

void List::select(int32_t index) {
	$var($ListPeer, peer, nullptr);
	do {
		$assign(peer, $cast($ListPeer, this->peer));
		if (peer != nullptr) {
			peer->select(index);
			return;
		}
		$synchronized(this) {
			bool alreadySelected = false;
			for (int32_t i = 0; i < $nc(this->selected)->length; ++i) {
				if ($nc(this->selected)->get(i) == index) {
					alreadySelected = true;
					break;
				}
			}
			if (!alreadySelected) {
				if (!this->multipleMode) {
					$set(this, selected, $new($ints, 1));
					$nc(this->selected)->set(0, index);
				} else {
					$var($ints, newsel, $new($ints, $nc(this->selected)->length + 1));
					$System::arraycopy(this->selected, 0, newsel, 0, $nc(this->selected)->length);
					newsel->set($nc(this->selected)->length, index);
					$set(this, selected, newsel);
				}
			}
		}
	} while (!$equals(peer, this->peer));
}

void List::deselect(int32_t index) {
	$synchronized(this) {
		$var($ListPeer, peer, $cast($ListPeer, this->peer));
		if (peer != nullptr) {
			bool var$0 = isMultipleMode();
			if (var$0 || (getSelectedIndex() == index)) {
				peer->deselect(index);
			}
		}
		for (int32_t i = 0; i < $nc(this->selected)->length; ++i) {
			if ($nc(this->selected)->get(i) == index) {
				$var($ints, newsel, $new($ints, $nc(this->selected)->length - 1));
				$System::arraycopy(this->selected, 0, newsel, 0, i);
				$System::arraycopy(this->selected, i + 1, newsel, i, $nc(this->selected)->length - (i + 1));
				$set(this, selected, newsel);
				return;
			}
		}
	}
}

bool List::isIndexSelected(int32_t index) {
	return isSelected(index);
}

bool List::isSelected(int32_t index) {
	$var($ints, sel, getSelectedIndexes());
	for (int32_t i = 0; i < $nc(sel)->length; ++i) {
		if (sel->get(i) == index) {
			return true;
		}
	}
	return false;
}

int32_t List::getRows() {
	return this->rows;
}

bool List::isMultipleMode() {
	return allowsMultipleSelections();
}

bool List::allowsMultipleSelections() {
	return this->multipleMode;
}

void List::setMultipleMode(bool b) {
	setMultipleSelections(b);
}

void List::setMultipleSelections(bool b) {
	$synchronized(this) {
		if (b != this->multipleMode) {
			this->multipleMode = b;
			$var($ListPeer, peer, $cast($ListPeer, this->peer));
			if (peer != nullptr) {
				peer->setMultipleMode(b);
			}
		}
	}
}

int32_t List::getVisibleIndex() {
	return this->visibleIndex;
}

void List::makeVisible(int32_t index) {
	$synchronized(this) {
		this->visibleIndex = index;
		$var($ListPeer, peer, $cast($ListPeer, this->peer));
		if (peer != nullptr) {
			peer->makeVisible(index);
		}
	}
}

$Dimension* List::getPreferredSize(int32_t rows) {
	return preferredSize(rows);
}

$Dimension* List::preferredSize(int32_t rows) {
	$synchronized(getTreeLock()) {
		$var($ListPeer, peer, $cast($ListPeer, this->peer));
		return (peer != nullptr) ? $nc(peer)->getPreferredSize(rows) : $Component::preferredSize();
	}
}

$Dimension* List::getPreferredSize() {
	return preferredSize();
}

$Dimension* List::preferredSize() {
	$synchronized(getTreeLock()) {
		return (this->rows > 0) ? preferredSize(this->rows) : $Component::preferredSize();
	}
}

$Dimension* List::getMinimumSize(int32_t rows) {
	return minimumSize(rows);
}

$Dimension* List::minimumSize(int32_t rows) {
	$synchronized(getTreeLock()) {
		$var($ListPeer, peer, $cast($ListPeer, this->peer));
		return (peer != nullptr) ? $nc(peer)->getMinimumSize(rows) : $Component::minimumSize();
	}
}

$Dimension* List::getMinimumSize() {
	return minimumSize();
}

$Dimension* List::minimumSize() {
	$synchronized(getTreeLock()) {
		return (this->rows > 0) ? minimumSize(this->rows) : $Component::minimumSize();
	}
}

void List::addItemListener($ItemListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, itemListener, $AWTEventMulticaster::add(this->itemListener, l));
		this->newEventsOnly = true;
	}
}

void List::removeItemListener($ItemListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, itemListener, $AWTEventMulticaster::remove(this->itemListener, l));
	}
}

$ItemListenerArray* List::getItemListeners() {
	$synchronized(this) {
		$load($ItemListener);
		return $fcast($ItemListenerArray, getListeners($ItemListener::class$));
	}
}

void List::addActionListener($ActionListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, actionListener, $AWTEventMulticaster::add(this->actionListener, l));
		this->newEventsOnly = true;
	}
}

void List::removeActionListener($ActionListener* l) {
	$synchronized(this) {
		if (l == nullptr) {
			return;
		}
		$set(this, actionListener, $AWTEventMulticaster::remove(this->actionListener, l));
	}
}

$ActionListenerArray* List::getActionListeners() {
	$synchronized(this) {
		$load($ActionListener);
		return $fcast($ActionListenerArray, getListeners($ActionListener::class$));
	}
}

$EventListenerArray* List::getListeners($Class* listenerType) {
	$var($EventListener, l, nullptr);
	$load($ActionListener);
	if (listenerType == $ActionListener::class$) {
		$assign(l, this->actionListener);
	} else {
		$load($ItemListener);
		if (listenerType == $ItemListener::class$) {
			$assign(l, this->itemListener);
		} else {
			return $Component::getListeners(listenerType);
		}
	}
	return $AWTEventMulticaster::getListeners(l, listenerType);
}

bool List::eventEnabled($AWTEvent* e) {
	switch ($nc(e)->id) {
	case $ActionEvent::ACTION_PERFORMED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ACTION_EVENT_MASK)) != 0 || this->actionListener != nullptr) {
				return true;
			}
			return false;
		}
	case $ItemEvent::ITEM_STATE_CHANGED:
		{
			if (((int64_t)(this->eventMask & (uint64_t)$AWTEvent::ITEM_EVENT_MASK)) != 0 || this->itemListener != nullptr) {
				return true;
			}
			return false;
		}
	default:
		{
			break;
		}
	}
	return $Component::eventEnabled(e);
}

void List::processEvent($AWTEvent* e) {
	if ($instanceOf($ItemEvent, e)) {
		processItemEvent($cast($ItemEvent, e));
		return;
	} else if ($instanceOf($ActionEvent, e)) {
		processActionEvent($cast($ActionEvent, e));
		return;
	}
	$Component::processEvent(e);
}

void List::processItemEvent($ItemEvent* e) {
	$var($ItemListener, listener, this->itemListener);
	if (listener != nullptr) {
		listener->itemStateChanged(e);
	}
}

void List::processActionEvent($ActionEvent* e) {
	$var($ActionListener, listener, this->actionListener);
	if (listener != nullptr) {
		listener->actionPerformed(e);
	}
}

$String* List::paramString() {
	$var($String, var$0, $$str({$($Component::paramString()), ",selected="_s}));
	return $concat(var$0, $(getSelectedItem()));
}

void List::delItems(int32_t start, int32_t end) {
	$synchronized(this) {
		for (int32_t i = end; i >= start; --i) {
			$nc(this->items)->removeElementAt(i);
		}
		$var($ListPeer, peer, $cast($ListPeer, this->peer));
		if (peer != nullptr) {
			peer->delItems(start, end);
		}
	}
}

void List::writeObject($ObjectOutputStream* s) {
	$synchronized(this) {
		$var($ListPeer, peer, $cast($ListPeer, this->peer));
		if (peer != nullptr) {
			$set(this, selected, peer->getSelectedIndexes());
		}
	}
	$nc(s)->defaultWriteObject();
	$init($Component);
	$AWTEventMulticaster::save(s, $Component::itemListenerK, this->itemListener);
	$AWTEventMulticaster::save(s, $Component::actionListenerK, this->actionListener);
	s->writeObject(nullptr);
}

void List::readObject($ObjectInputStream* s) {
	$GraphicsEnvironment::checkHeadless();
	$nc(s)->defaultReadObject();
	$var($Object, keyOrNull, nullptr);
	while (nullptr != ($assign(keyOrNull, s->readObject()))) {
		$var($String, key, $nc(($cast($String, keyOrNull)))->intern());
		$init($Component);
		if ($Component::itemListenerK == key) {
			addItemListener(($cast($ItemListener, $(s->readObject()))));
		} else {
			if ($Component::actionListenerK == key) {
				addActionListener(($cast($ActionListener, $(s->readObject()))));
			} else {
				s->readObject();
			}
		}
	}
}

$AccessibleContext* List::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($List$AccessibleAWTList, this));
	}
	return this->accessibleContext;
}

void clinit$List($Class* class$) {
	$assignStatic(List::base, "list"_s);
	List::nameCounter = 0;
}

List::List() {
}

$Class* List::load$($String* name, bool initialize) {
	$loadClass(List, name, initialize, &_List_ClassInfo_, clinit$List, allocate$List);
	return class$;
}

$Class* List::class$ = nullptr;

	} // awt
} // java