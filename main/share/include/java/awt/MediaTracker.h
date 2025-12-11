#ifndef _java_awt_MediaTracker_h_
#define _java_awt_MediaTracker_h_
//$ class java.awt.MediaTracker
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("ABORTED")
#undef ABORTED
#pragma push_macro("COMPLETE")
#undef COMPLETE
#pragma push_macro("DONE")
#undef DONE
#pragma push_macro("ERRORED")
#undef ERRORED
#pragma push_macro("LOADING")
#undef LOADING

namespace java {
	namespace awt {
		class Component;
		class Image;
		class MediaEntry;
	}
}

namespace java {
	namespace awt {

class $import MediaTracker : public ::java::io::Serializable {
	$class(MediaTracker, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	MediaTracker();
	void init$(::java::awt::Component* comp);
	virtual void addImage(::java::awt::Image* image, int32_t id);
	virtual void addImage(::java::awt::Image* image, int32_t id, int32_t w, int32_t h);
	void addImageImpl(::java::awt::Image* image, int32_t id, int32_t w, int32_t h);
	virtual bool checkAll();
	virtual bool checkAll(bool load);
	bool checkAll(bool load, bool verify);
	virtual bool checkID(int32_t id);
	virtual bool checkID(int32_t id, bool load);
	bool checkID(int32_t id, bool load, bool verify);
	virtual $ObjectArray* getErrorsAny();
	virtual $ObjectArray* getErrorsID(int32_t id);
	static ::java::awt::Image* getResolutionVariant(::java::awt::Image* image);
	virtual bool isErrorAny();
	virtual bool isErrorID(int32_t id);
	virtual void removeImage(::java::awt::Image* image);
	virtual void removeImage(::java::awt::Image* image, int32_t id);
	virtual void removeImage(::java::awt::Image* image, int32_t id, int32_t width, int32_t height);
	void removeImageImpl(::java::awt::Image* image);
	void removeImageImpl(::java::awt::Image* image, int32_t id);
	void removeImageImpl(::java::awt::Image* image, int32_t id, int32_t width, int32_t height);
	virtual void setDone();
	virtual int32_t statusAll(bool load);
	int32_t statusAll(bool load, bool verify);
	virtual int32_t statusID(int32_t id, bool load);
	int32_t statusID(int32_t id, bool load, bool verify);
	virtual void waitForAll();
	virtual bool waitForAll(int64_t ms);
	virtual void waitForID(int32_t id);
	virtual bool waitForID(int32_t id, int64_t ms);
	::java::awt::Component* target = nullptr;
	::java::awt::MediaEntry* head = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xF94B6BA266CC97F1;
	static const int32_t LOADING = 1;
	static const int32_t ABORTED = 2;
	static const int32_t ERRORED = 4;
	static const int32_t COMPLETE = 8;
	static const int32_t DONE = 14; // (ABORTED | ERRORED | COMPLETE)
};

	} // awt
} // java

#pragma pop_macro("ABORTED")
#pragma pop_macro("COMPLETE")
#pragma pop_macro("DONE")
#pragma pop_macro("ERRORED")
#pragma pop_macro("LOADING")

#endif // _java_awt_MediaTracker_h_