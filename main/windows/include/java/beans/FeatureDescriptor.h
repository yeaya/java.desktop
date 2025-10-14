#ifndef _java_beans_FeatureDescriptor_h_
#define _java_beans_FeatureDescriptor_h_
//$ class java.beans.FeatureDescriptor
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("TRANSIENT")
#undef TRANSIENT

namespace java {
	namespace beans {
		class Transient;
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
		class Enumeration;
		class Hashtable;
	}
}

namespace java {
	namespace beans {

class $import FeatureDescriptor : public ::java::lang::Object {
	$class(FeatureDescriptor, 0, ::java::lang::Object)
public:
	FeatureDescriptor();
	void init$();
	void init$(::java::beans::FeatureDescriptor* x, ::java::beans::FeatureDescriptor* y);
	void init$(::java::beans::FeatureDescriptor* old);
	void addTable(::java::util::Hashtable* table);
	virtual void appendTo(::java::lang::StringBuilder* sb);
	static void appendTo(::java::lang::StringBuilder* sb, $String* name, ::java::lang::ref::Reference* reference);
	static void appendTo(::java::lang::StringBuilder* sb, $String* name, Object$* value);
	static void appendTo(::java::lang::StringBuilder* sb, $String* name, bool value);
	virtual ::java::util::Enumeration* attributeNames();
	virtual $Class* getClass0();
	virtual $String* getDisplayName();
	virtual $String* getName();
	static $ClassArray* getParameterTypes($Class* base, ::java::lang::reflect::Method* method);
	static $Class* getReturnType($Class* base, ::java::lang::reflect::Method* method);
	virtual $String* getShortDescription();
	static ::java::lang::ref::Reference* getSoftReference(Object$* object);
	::java::util::Hashtable* getTable();
	virtual $Object* getValue($String* attributeName);
	static ::java::lang::ref::Reference* getWeakReference(Object$* object);
	virtual bool isExpert();
	virtual bool isHidden();
	virtual bool isPreferred();
	virtual bool isTransient();
	virtual void setClass0($Class* cls);
	virtual void setDisplayName($String* displayName);
	virtual void setExpert(bool expert);
	virtual void setHidden(bool hidden);
	virtual void setName($String* name);
	virtual void setPreferred(bool preferred);
	virtual void setShortDescription($String* text);
	virtual void setTransient(::java::beans::Transient* annotation);
	virtual void setValue($String* attributeName, Object$* value);
	virtual $String* toString() override;
	static $String* TRANSIENT;
	::java::lang::ref::Reference* classRef = nullptr;
	bool expert = false;
	bool hidden = false;
	bool preferred = false;
	$String* shortDescription = nullptr;
	$String* name = nullptr;
	$String* displayName = nullptr;
	::java::util::Hashtable* table = nullptr;
};

	} // beans
} // java

#pragma pop_macro("TRANSIENT")

#endif // _java_beans_FeatureDescriptor_h_