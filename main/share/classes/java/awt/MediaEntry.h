#ifndef _java_awt_MediaEntry_h_
#define _java_awt_MediaEntry_h_
//$ class java.awt.MediaEntry
//$ extends java.lang.Object

#include <java/awt/MediaTracker.h>

#pragma push_macro("ABORTED")
#undef ABORTED
#pragma push_macro("COMPLETE")
#undef COMPLETE
#pragma push_macro("DONE")
#undef DONE
#pragma push_macro("ERRORED")
#undef ERRORED
#pragma push_macro("ID")
#undef ID
#pragma push_macro("LOADING")
#undef LOADING
#pragma push_macro("LOADSTARTED")
#undef LOADSTARTED

namespace java {
	namespace awt {

class MediaEntry : public ::java::lang::Object {
	$class(MediaEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MediaEntry();
	void init$(::java::awt::MediaTracker* mt, int32_t id);
	virtual void cancel();
	virtual int32_t getID();
	virtual $Object* getMedia() {return nullptr;}
	virtual int32_t getStatus(bool doLoad, bool doVerify);
	static ::java::awt::MediaEntry* insert(::java::awt::MediaEntry* head, ::java::awt::MediaEntry* me);
	virtual void setStatus(int32_t flag);
	virtual void startLoad() {}
	::java::awt::MediaTracker* tracker = nullptr;
	int32_t ID = 0;
	::java::awt::MediaEntry* next = nullptr;
	int32_t status = 0;
	bool cancelled = false;
	static const int32_t LOADING = ::java::awt::MediaTracker::LOADING;
	static const int32_t ABORTED = ::java::awt::MediaTracker::ABORTED;
	static const int32_t ERRORED = ::java::awt::MediaTracker::ERRORED;
	static const int32_t COMPLETE = ::java::awt::MediaTracker::COMPLETE;
	static const int32_t LOADSTARTED = 13; // (LOADING | ERRORED | COMPLETE)
	static const int32_t DONE = 14; // (ABORTED | ERRORED | COMPLETE)
};

	} // awt
} // java

#pragma pop_macro("ABORTED")
#pragma pop_macro("COMPLETE")
#pragma pop_macro("DONE")
#pragma pop_macro("ERRORED")
#pragma pop_macro("ID")
#pragma pop_macro("LOADING")
#pragma pop_macro("LOADSTARTED")

#endif // _java_awt_MediaEntry_h_