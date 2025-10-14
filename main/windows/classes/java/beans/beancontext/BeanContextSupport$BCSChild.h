#ifndef _java_beans_beancontext_BeanContextSupport$BCSChild_h_
#define _java_beans_beancontext_BeanContextSupport$BCSChild_h_
//$ class java.beans.beancontext.BeanContextSupport$BCSChild
//$ extends java.io.Serializable

#include <java/io/Serializable.h>

namespace java {
	namespace beans {
		namespace beancontext {
			class BeanContextSupport;
		}
	}
}

namespace java {
	namespace beans {
		namespace beancontext {

class $export BeanContextSupport$BCSChild : public ::java::io::Serializable {
	$class(BeanContextSupport$BCSChild, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	BeanContextSupport$BCSChild();
	void init$(::java::beans::beancontext::BeanContextSupport* this$0, Object$* bcc, Object$* peer);
	virtual $Object* getChild();
	virtual $Object* getProxyPeer();
	virtual bool isProxyPeer();
	virtual bool isRemovePending();
	virtual void setRemovePending(bool v);
	::java::beans::beancontext::BeanContextSupport* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xAF4BF419EE45FF5B;
	$Object* child = nullptr;
	$Object* proxyPeer = nullptr;
	bool removePending = false;
};

		} // beancontext
	} // beans
} // java

#endif // _java_beans_beancontext_BeanContextSupport$BCSChild_h_