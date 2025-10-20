#include <java/beans/Beans.h>

#include <com/sun/beans/finder/ClassFinder.h>
#include <java/applet/Applet.h>
#include <java/applet/AppletContext.h>
#include <java/applet/AppletStub.h>
#include <java/awt/Component.h>
#include <java/beans/AppletInitializer.h>
#include <java/beans/BeansAppletContext.h>
#include <java/beans/BeansAppletStub.h>
#include <java/beans/Introspector.h>
#include <java/beans/ObjectInputStreamWithLoader.h>
#include <java/beans/ThreadGroupContext.h>
#include <java/beans/beancontext/BeanContext.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $ClassFinder = ::com::sun::beans::finder::ClassFinder;
using $Applet = ::java::applet::Applet;
using $AppletContext = ::java::applet::AppletContext;
using $AppletStub = ::java::applet::AppletStub;
using $Component = ::java::awt::Component;
using $AppletInitializer = ::java::beans::AppletInitializer;
using $BeansAppletContext = ::java::beans::BeansAppletContext;
using $BeansAppletStub = ::java::beans::BeansAppletStub;
using $Introspector = ::java::beans::Introspector;
using $ObjectInputStreamWithLoader = ::java::beans::ObjectInputStreamWithLoader;
using $ThreadGroupContext = ::java::beans::ThreadGroupContext;
using $BeanContext = ::java::beans::beancontext::BeanContext;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $NullPointerException = ::java::lang::NullPointerException;
using $SecurityException = ::java::lang::SecurityException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Modifier = ::java::lang::reflect::Modifier;
using $URL = ::java::net::URL;
using $Collection = ::java::util::Collection;

namespace java {
	namespace beans {

$NamedAttribute Beans_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Beans_MethodAnnotations_instantiate4[] = {
	{"Ljava/lang/Deprecated;", Beans_Attribute_var$0},
	{}
};

$MethodInfo _Beans_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Beans::*)()>(&Beans::init$))},
	{"getInstanceOf", "(Ljava/lang/Object;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PUBLIC | $STATIC, $method(static_cast<$Object*(*)(Object$*,$Class*)>(&Beans::getInstanceOf))},
	{"instantiate", "(Ljava/lang/ClassLoader;Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($ClassLoader*,$String*)>(&Beans::instantiate)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"instantiate", "(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/beans/beancontext/BeanContext;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Object*(*)($ClassLoader*,$String*,$BeanContext*)>(&Beans::instantiate)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"instantiate", "(Ljava/lang/ClassLoader;Ljava/lang/String;Ljava/beans/beancontext/BeanContext;Ljava/beans/AppletInitializer;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$Object*(*)($ClassLoader*,$String*,$BeanContext*,$AppletInitializer*)>(&Beans::instantiate)), "java.io.IOException,java.lang.ClassNotFoundException", nullptr, _Beans_MethodAnnotations_instantiate4},
	{"isDesignTime", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&Beans::isDesignTime))},
	{"isGuiAvailable", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&Beans::isGuiAvailable))},
	{"isInstanceOf", "(Ljava/lang/Object;Ljava/lang/Class;)Z", "(Ljava/lang/Object;Ljava/lang/Class<*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)(Object$*,$Class*)>(&Beans::isInstanceOf))},
	{"setDesignTime", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&Beans::setDesignTime)), "java.lang.SecurityException"},
	{"setGuiAvailable", "(Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(bool)>(&Beans::setGuiAvailable)), "java.lang.SecurityException"},
	{"unsafeBeanContextAdd", "(Ljava/beans/beancontext/BeanContext;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($BeanContext*,Object$*)>(&Beans::unsafeBeanContextAdd))},
	{}
};

$ClassInfo _Beans_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.Beans",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Beans_MethodInfo_
};

$Object* allocate$Beans($Class* clazz) {
	return $of($alloc(Beans));
}

void Beans::init$() {
}

$Object* Beans::instantiate($ClassLoader* cls, $String* beanName) {
	return $of(Beans::instantiate(cls, beanName, nullptr, nullptr));
}

$Object* Beans::instantiate($ClassLoader* cls, $String* beanName, $BeanContext* beanContext) {
	return $of(Beans::instantiate(cls, beanName, beanContext, nullptr));
}

$Object* Beans::instantiate($ClassLoader* cls$renamed, $String* beanName, $BeanContext* beanContext, $AppletInitializer* initializer) {
	$load(Beans);
	$useLocalCurrentObjectStackCache();
	$var($ClassLoader, cls, cls$renamed);
	$beforeCallerSensitive();
	$var($InputStream, ins, nullptr);
	$var($ObjectInputStream, oins, nullptr);
	$var($Object, result, nullptr);
	bool serialized = false;
	$var($IOException, serex, nullptr);
	if (cls == nullptr) {
		try {
			$assign(cls, $ClassLoader::getSystemClassLoader());
		} catch ($SecurityException&) {
			$catch();
		}
	}
	$var($String, serName, $($nc(beanName)->replace(u'.', u'/'))->concat(".ser"_s));
	if (cls == nullptr) {
		$assign(ins, $ClassLoader::getSystemResourceAsStream(serName));
	} else {
		$assign(ins, $nc(cls)->getResourceAsStream(serName));
	}
	if (ins != nullptr) {
		try {
			if (cls == nullptr) {
				$assign(oins, $new($ObjectInputStream, ins));
			} else {
				$assign(oins, $new($ObjectInputStreamWithLoader, ins, cls));
			}
			$assign(result, $nc(oins)->readObject());
			serialized = true;
			oins->close();
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			ins->close();
			$assign(serex, ex);
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, ex, $catch());
			ins->close();
			$throw(ex);
		}
	}
	if (result == nullptr) {
		$Class* cl = nullptr;
		try {
			cl = $ClassFinder::findClass(beanName, cls);
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, ex, $catch());
			if (serex != nullptr) {
				$throw(serex);
			}
			$throw(ex);
		}
		if (!$Modifier::isPublic($nc(cl)->getModifiers())) {
			$throwNew($ClassNotFoundException, $$str({""_s, cl, " : no public access"_s}));
		}
		try {
			$assign(result, $nc(cl)->newInstance());
		} catch ($Exception&) {
			$var($Exception, ex, $catch());
			$throwNew($ClassNotFoundException, $$str({""_s, cl, " : "_s, ex}), ex);
		}
	}
	if (result != nullptr) {
		$var($AppletStub, stub, nullptr);
		if ($instanceOf($Applet, result)) {
			$var($Applet, applet, $cast($Applet, result));
			bool needDummies = initializer == nullptr;
			if (needDummies) {
				$var($String, resourceName, nullptr);
				if (serialized) {
					$assign(resourceName, $(beanName->replace(u'.', u'/'))->concat(".ser"_s));
				} else {
					$assign(resourceName, $(beanName->replace(u'.', u'/'))->concat(".class"_s));
				}
				$var($URL, objectUrl, nullptr);
				$var($URL, codeBase, nullptr);
				$var($URL, docBase, nullptr);
				if (cls == nullptr) {
					$assign(objectUrl, $ClassLoader::getSystemResource(resourceName));
				} else {
					$assign(objectUrl, $nc(cls)->getResource(resourceName));
				}
				if (objectUrl != nullptr) {
					$var($String, s, objectUrl->toExternalForm());
					if ($nc(s)->endsWith(resourceName)) {
						int32_t var$0 = s->length();
						int32_t ix = var$0 - $nc(resourceName)->length();
						$assign(codeBase, $new($URL, $(s->substring(0, ix))));
						$assign(docBase, codeBase);
						ix = s->lastIndexOf((int32_t)u'/');
						if (ix >= 0) {
							$assign(docBase, $new($URL, $(s->substring(0, ix + 1))));
						}
					}
				}
				$var($BeansAppletContext, context, $new($BeansAppletContext, applet));
				$assign(stub, static_cast<$AppletStub*>($new($BeansAppletStub, applet, context, codeBase, docBase)));
				applet->setStub(stub);
			} else {
				$nc(initializer)->initialize(applet, beanContext);
			}
			if (beanContext != nullptr) {
				unsafeBeanContextAdd(beanContext, result);
			}
			if (!serialized) {
				applet->setSize(100, 100);
				applet->init();
			}
			if (needDummies) {
				$nc(($cast($BeansAppletStub, stub)))->active = true;
			} else {
				$nc(initializer)->activate(applet);
			}
		} else if (beanContext != nullptr) {
			unsafeBeanContextAdd(beanContext, result);
		}
	}
	return $of(result);
}

void Beans::unsafeBeanContextAdd($BeanContext* beanContext, Object$* res) {
	$nc(beanContext)->add(res);
}

$Object* Beans::getInstanceOf(Object$* bean, $Class* targetType) {
	return $of(bean);
}

bool Beans::isInstanceOf(Object$* bean, $Class* targetType) {
	return $Introspector::isSubclass($nc($of(bean))->getClass(), targetType);
}

bool Beans::isDesignTime() {
	return $nc($($ThreadGroupContext::getContext()))->isDesignTime();
}

bool Beans::isGuiAvailable() {
	return $nc($($ThreadGroupContext::getContext()))->isGuiAvailable();
}

void Beans::setDesignTime(bool isDesignTime) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertiesAccess();
	}
	$nc($($ThreadGroupContext::getContext()))->setDesignTime(isDesignTime);
}

void Beans::setGuiAvailable(bool isGuiAvailable) {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertiesAccess();
	}
	$nc($($ThreadGroupContext::getContext()))->setGuiAvailable(isGuiAvailable);
}

Beans::Beans() {
}

$Class* Beans::load$($String* name, bool initialize) {
	$loadClass(Beans, name, initialize, &_Beans_ClassInfo_, allocate$Beans);
	return class$;
}

$Class* Beans::class$ = nullptr;

	} // beans
} // java