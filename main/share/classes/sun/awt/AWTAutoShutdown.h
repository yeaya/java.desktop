#ifndef _sun_awt_AWTAutoShutdown_h_
#define _sun_awt_AWTAutoShutdown_h_
//$ class sun.awt.AWTAutoShutdown
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

#pragma push_macro("SAFETY_TIMEOUT")
#undef SAFETY_TIMEOUT

namespace java {
	namespace awt {
		class AWTEvent;
	}
}
namespace java {
	namespace lang {
		class Thread;
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {

class $export AWTAutoShutdown : public ::java::lang::Runnable {
	$class(AWTAutoShutdown, 0, ::java::lang::Runnable)
public:
	AWTAutoShutdown();
	void init$();
	void activateBlockerThread();
	void dumpPeers(::sun::util::logging::PlatformLogger* aLog);
	static ::sun::awt::AWTAutoShutdown* getInstance();
	$Object* getPeer(Object$* target);
	static ::java::awt::AWTEvent* getShutdownEvent();
	bool isReadyToShutdown();
	$Thread* lambda$activateBlockerThread$0();
	void notifyPeerMapUpdated();
	void notifyThreadBusy($Thread* thread);
	void notifyThreadFree($Thread* thread);
	static void notifyToolkitThreadBusy();
	static void notifyToolkitThreadFree();
	void registerPeer(Object$* target, Object$* peer);
	virtual void run() override;
	void setToolkitBusy(bool busy);
	void unregisterPeer(Object$* target, Object$* peer);
	static ::sun::awt::AWTAutoShutdown* theInstance;
	$Object* mainLock = nullptr;
	$Object* activationLock = nullptr;
	::java::util::Set* busyThreadSet = nullptr;
	bool toolkitThreadBusy = false;
	::java::util::Map* peerMap = nullptr;
	$Thread* blockerThread = nullptr;
	bool timeoutPassed = false;
	static const int32_t SAFETY_TIMEOUT = 1000;
};

	} // awt
} // sun

#pragma pop_macro("SAFETY_TIMEOUT")

#endif // _sun_awt_AWTAutoShutdown_h_