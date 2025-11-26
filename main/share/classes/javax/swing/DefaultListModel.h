#ifndef _javax_swing_DefaultListModel_h_
#define _javax_swing_DefaultListModel_h_
//$ class javax.swing.DefaultListModel
//$ extends javax.swing.AbstractListModel

#include <java/lang/Array.h>
#include <javax/swing/AbstractListModel.h>

namespace java {
	namespace util {
		class Collection;
		class Enumeration;
		class Vector;
	}
}

namespace javax {
	namespace swing {

class $export DefaultListModel : public ::javax::swing::AbstractListModel {
	$class(DefaultListModel, $NO_CLASS_INIT, ::javax::swing::AbstractListModel)
public:
	DefaultListModel();
	void init$();
	virtual void add(int32_t index, Object$* element);
	virtual void addAll(::java::util::Collection* c);
	virtual void addAll(int32_t index, ::java::util::Collection* c);
	virtual void addElement(Object$* element);
	virtual int32_t capacity();
	virtual void clear();
	virtual bool contains(Object$* elem);
	virtual void copyInto($ObjectArray* anArray);
	virtual $Object* elementAt(int32_t index);
	virtual ::java::util::Enumeration* elements();
	virtual void ensureCapacity(int32_t minCapacity);
	virtual $Object* firstElement();
	virtual $Object* get(int32_t index);
	virtual $Object* getElementAt(int32_t index) override;
	virtual int32_t getSize() override;
	virtual int32_t indexOf(Object$* elem);
	virtual int32_t indexOf(Object$* elem, int32_t index);
	virtual void insertElementAt(Object$* element, int32_t index);
	virtual bool isEmpty();
	virtual $Object* lastElement();
	virtual int32_t lastIndexOf(Object$* elem);
	virtual int32_t lastIndexOf(Object$* elem, int32_t index);
	virtual $Object* remove(int32_t index);
	virtual void removeAllElements();
	virtual bool removeElement(Object$* obj);
	virtual void removeElementAt(int32_t index);
	virtual void removeRange(int32_t fromIndex, int32_t toIndex);
	virtual $Object* set(int32_t index, Object$* element);
	virtual void setElementAt(Object$* element, int32_t index);
	virtual void setSize(int32_t newSize);
	virtual int32_t size();
	virtual $ObjectArray* toArray();
	virtual $String* toString() override;
	virtual void trimToSize();
	::java::util::Vector* delegate = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_DefaultListModel_h_