#ifndef _sun_awt_util_IdentityArrayList_h_
#define _sun_awt_util_IdentityArrayList_h_
//$ class sun.awt.util.IdentityArrayList
//$ extends java.util.AbstractList
//$ implements java.util.RandomAccess

#include <java/lang/Array.h>
#include <java/util/AbstractList.h>
#include <java/util/RandomAccess.h>

namespace java {
	namespace util {
		class Collection;
	}
}

namespace sun {
	namespace awt {
		namespace util {

class IdentityArrayList : public ::java::util::AbstractList, public ::java::util::RandomAccess {
	$class(IdentityArrayList, $NO_CLASS_INIT, ::java::util::AbstractList, ::java::util::RandomAccess)
public:
	IdentityArrayList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t initialCapacity);
	void init$();
	void init$(::java::util::Collection* c);
	virtual bool add(Object$* e) override;
	virtual void add(int32_t index, Object$* element) override;
	virtual bool addAll(::java::util::Collection* c) override;
	virtual bool addAll(int32_t index, ::java::util::Collection* c) override;
	virtual void clear() override;
	virtual bool contains(Object$* o) override;
	virtual void ensureCapacity(int32_t minCapacity);
	void fastRemove(int32_t index);
	virtual $Object* get(int32_t index) override;
	virtual int32_t indexOf(Object$* o) override;
	virtual bool isEmpty() override;
	virtual int32_t lastIndexOf(Object$* o) override;
	$String* outOfBoundsMsg(int32_t index);
	void rangeCheck(int32_t index);
	void rangeCheckForAdd(int32_t index);
	virtual $Object* remove(int32_t index) override;
	virtual bool remove(Object$* o) override;
	virtual void removeRange(int32_t fromIndex, int32_t toIndex) override;
	virtual $Object* set(int32_t index, Object$* element) override;
	virtual int32_t size() override;
	using ::java::util::AbstractList::toArray;
	virtual $ObjectArray* toArray() override;
	virtual $ObjectArray* toArray($ObjectArray* a) override;
	virtual $String* toString() override;
	virtual void trimToSize();
	$ObjectArray* elementData = nullptr;
	int32_t size$ = 0;
};

		} // util
	} // awt
} // sun

#endif // _sun_awt_util_IdentityArrayList_h_