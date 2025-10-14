#ifndef _java_beans_IndexedPropertyDescriptor_h_
#define _java_beans_IndexedPropertyDescriptor_h_
//$ class java.beans.IndexedPropertyDescriptor
//$ extends java.beans.PropertyDescriptor

#include <java/beans/PropertyDescriptor.h>

namespace java {
	namespace beans {
		class MethodRef;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class Map$Entry;
	}
}

namespace java {
	namespace beans {

class $export IndexedPropertyDescriptor : public ::java::beans::PropertyDescriptor {
	$class(IndexedPropertyDescriptor, $NO_CLASS_INIT, ::java::beans::PropertyDescriptor)
public:
	IndexedPropertyDescriptor();
	void init$($String* propertyName, $Class* beanClass);
	void init$($String* propertyName, $Class* beanClass, $String* readMethodName, $String* writeMethodName, $String* indexedReadMethodName, $String* indexedWriteMethodName);
	void init$($String* propertyName, ::java::lang::reflect::Method* readMethod, ::java::lang::reflect::Method* writeMethod, ::java::lang::reflect::Method* indexedReadMethod, ::java::lang::reflect::Method* indexedWriteMethod);
	void init$(::java::util::Map$Entry* entry, bool bound);
	void init$(::java::beans::PropertyDescriptor* x, ::java::beans::PropertyDescriptor* y);
	void init$(::java::beans::IndexedPropertyDescriptor* old);
	virtual void appendTo(::java::lang::StringBuilder* sb) override;
	virtual bool equals(Object$* obj) override;
	$Class* findIndexedPropertyType(::java::lang::reflect::Method* indexedReadMethod, ::java::lang::reflect::Method* indexedWriteMethod);
	virtual $Class* getIndexedPropertyType();
	$Class* getIndexedPropertyType0();
	virtual ::java::lang::reflect::Method* getIndexedReadMethod();
	virtual ::java::lang::reflect::Method* getIndexedWriteMethod();
	virtual int32_t hashCode() override;
	void setIndexedPropertyType($Class* type);
	virtual void setIndexedReadMethod(::java::lang::reflect::Method* readMethod);
	void setIndexedReadMethod0(::java::lang::reflect::Method* readMethod);
	virtual void setIndexedWriteMethod(::java::lang::reflect::Method* writeMethod);
	void setIndexedWriteMethod0(::java::lang::reflect::Method* writeMethod);
	virtual void updateGenericsFor($Class* type) override;
	::java::lang::ref::Reference* indexedPropertyTypeRef = nullptr;
	::java::beans::MethodRef* indexedReadMethodRef = nullptr;
	::java::beans::MethodRef* indexedWriteMethodRef = nullptr;
	$String* indexedReadMethodName = nullptr;
	$String* indexedWriteMethodName = nullptr;
};

	} // beans
} // java

#endif // _java_beans_IndexedPropertyDescriptor_h_