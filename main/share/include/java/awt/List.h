#ifndef _java_awt_List_h_
#define _java_awt_List_h_
//$ class java.awt.List
//$ extends java.awt.Component
//$ implements java.awt.ItemSelectable,javax.accessibility.Accessible

#include <java/awt/Component.h>
#include <java/awt/ItemSelectable.h>
#include <java/lang/Array.h>
#include <javax/accessibility/Accessible.h>

#pragma push_macro("DEFAULT_VISIBLE_ROWS")
#undef DEFAULT_VISIBLE_ROWS

namespace java {
	namespace awt {
		class AWTEvent;
		class Dimension;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ActionListener;
			class ItemEvent;
			class ItemListener;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class EventListener;
		class Vector;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $import List : public ::java::awt::Component, public ::java::awt::ItemSelectable, public ::javax::accessibility::Accessible {
	$class(List, 0, ::java::awt::Component, ::java::awt::ItemSelectable, ::javax::accessibility::Accessible)
public:
	List();
	using ::java::awt::Component::add;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t rows);
	void init$(int32_t rows, bool multipleMode);
	virtual void add($String* item);
	virtual void add($String* item, int32_t index);
	virtual void addActionListener(::java::awt::event::ActionListener* l);
	virtual void addItem($String* item);
	virtual void addItem($String* item, int32_t index);
	virtual void addItemListener(::java::awt::event::ItemListener* l) override;
	virtual void addNotify() override;
	virtual bool allowsMultipleSelections();
	virtual void clear();
	virtual $String* constructComponentName() override;
	virtual int32_t countItems();
	virtual void delItem(int32_t position);
	virtual void delItems(int32_t start, int32_t end);
	virtual void deselect(int32_t index);
	virtual bool eventEnabled(::java::awt::AWTEvent* e) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual $Array<::java::awt::event::ActionListener>* getActionListeners();
	virtual $String* getItem(int32_t index);
	virtual int32_t getItemCount();
	$String* getItemImpl(int32_t index);
	virtual $Array<::java::awt::event::ItemListener>* getItemListeners();
	virtual $StringArray* getItems();
	virtual $Array<::java::util::EventListener>* getListeners($Class* listenerType) override;
	virtual ::java::awt::Dimension* getMinimumSize(int32_t rows);
	virtual ::java::awt::Dimension* getMinimumSize() override;
	virtual ::java::awt::Dimension* getPreferredSize(int32_t rows);
	virtual ::java::awt::Dimension* getPreferredSize() override;
	virtual int32_t getRows();
	virtual int32_t getSelectedIndex();
	virtual $ints* getSelectedIndexes();
	virtual $String* getSelectedItem();
	virtual $StringArray* getSelectedItems();
	virtual $ObjectArray* getSelectedObjects() override;
	virtual int32_t getVisibleIndex();
	virtual bool isIndexSelected(int32_t index);
	virtual bool isMultipleMode();
	virtual bool isSelected(int32_t index);
	virtual void makeVisible(int32_t index);
	virtual ::java::awt::Dimension* minimumSize(int32_t rows);
	virtual ::java::awt::Dimension* minimumSize() override;
	virtual $String* paramString() override;
	virtual ::java::awt::Dimension* preferredSize(int32_t rows);
	virtual ::java::awt::Dimension* preferredSize() override;
	virtual void processActionEvent(::java::awt::event::ActionEvent* e);
	virtual void processEvent(::java::awt::AWTEvent* e) override;
	virtual void processItemEvent(::java::awt::event::ItemEvent* e);
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::awt::Component::remove;
	virtual void remove($String* item);
	virtual void remove(int32_t position);
	virtual void removeActionListener(::java::awt::event::ActionListener* l);
	virtual void removeAll();
	virtual void removeItemListener(::java::awt::event::ItemListener* l) override;
	virtual void removeNotify() override;
	virtual void replaceItem($String* newValue, int32_t index);
	virtual void select(int32_t index);
	virtual void setMultipleMode(bool b);
	virtual void setMultipleSelections(bool b);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::util::Vector* items = nullptr;
	int32_t rows = 0;
	bool multipleMode = false;
	$ints* selected = nullptr;
	int32_t visibleIndex = 0;
	::java::awt::event::ActionListener* actionListener = nullptr;
	::java::awt::event::ItemListener* itemListener = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const int64_t serialVersionUID = (int64_t)0xD224B95E612D798B;
	static const int32_t DEFAULT_VISIBLE_ROWS = 4;
	int32_t listSerializedDataVersion = 0;
};

	} // awt
} // java

#pragma pop_macro("DEFAULT_VISIBLE_ROWS")

#endif // _java_awt_List_h_