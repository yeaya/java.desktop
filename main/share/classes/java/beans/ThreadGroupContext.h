#ifndef _java_beans_ThreadGroupContext_h_
#define _java_beans_ThreadGroupContext_h_
//$ class java.beans.ThreadGroupContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace finder {
				class BeanInfoFinder;
				class PropertyEditorFinder;
			}
		}
	}
}
namespace java {
	namespace beans {
		class BeanInfo;
		class WeakIdentityMap;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace beans {

class ThreadGroupContext : public ::java::lang::Object {
	$class(ThreadGroupContext, 0, ::java::lang::Object)
public:
	ThreadGroupContext();
	void init$();
	void clearBeanInfoCache();
	::java::beans::BeanInfo* getBeanInfo($Class* type);
	::com::sun::beans::finder::BeanInfoFinder* getBeanInfoFinder();
	static ::java::beans::ThreadGroupContext* getContext();
	::com::sun::beans::finder::PropertyEditorFinder* getPropertyEditorFinder();
	bool isDesignTime();
	bool isGuiAvailable();
	::java::beans::BeanInfo* putBeanInfo($Class* type, ::java::beans::BeanInfo* info);
	void removeBeanInfo($Class* type);
	void setDesignTime(bool isDesignTime);
	void setGuiAvailable(bool isGuiAvailable);
	static ::java::beans::WeakIdentityMap* contexts;
	$volatile(bool) isDesignTime$ = false;
	$volatile(::java::lang::Boolean*) isGuiAvailable$ = nullptr;
	::java::util::Map* beanInfoCache = nullptr;
	::com::sun::beans::finder::BeanInfoFinder* beanInfoFinder = nullptr;
	::com::sun::beans::finder::PropertyEditorFinder* propertyEditorFinder = nullptr;
};

	} // beans
} // java

#endif // _java_beans_ThreadGroupContext_h_