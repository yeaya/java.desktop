#ifndef _com_sun_media_sound_ModelByteBuffer_h_
#define _com_sun_media_sound_ModelByteBuffer_h_
//$ class com.sun.media.sound.ModelByteBuffer
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Collection;
	}
}

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

class ModelByteBuffer : public ::java::lang::Object {
	$class(ModelByteBuffer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ModelByteBuffer();
	void init$(::com::sun::media::sound::ModelByteBuffer* parent, int64_t beginIndex, int64_t endIndex, bool independent);
	void init$($bytes* buffer);
	void init$($bytes* buffer, int32_t offset, int32_t len);
	void init$(::java::io::File* file);
	void init$(::java::io::File* file, int64_t offset, int64_t len);
	$bytes* array();
	int64_t arrayOffset();
	int64_t capacity();
	::java::io::File* getFile();
	int64_t getFilePointer();
	::java::io::InputStream* getInputStream();
	::com::sun::media::sound::ModelByteBuffer* getRoot();
	void load();
	static void loadAll(::java::util::Collection* col);
	::com::sun::media::sound::ModelByteBuffer* subbuffer(int64_t beginIndex);
	::com::sun::media::sound::ModelByteBuffer* subbuffer(int64_t beginIndex, int64_t endIndex);
	::com::sun::media::sound::ModelByteBuffer* subbuffer(int64_t beginIndex, int64_t endIndex, bool independent);
	void unload();
	void writeTo(::java::io::OutputStream* out);
	::com::sun::media::sound::ModelByteBuffer* root = nullptr;
	::java::io::File* file = nullptr;
	int64_t fileoffset = 0;
	$bytes* buffer = nullptr;
	int64_t offset = 0;
	int64_t len = 0;
};

			} // sound
		} // media
	} // sun
} // com

#endif // _com_sun_media_sound_ModelByteBuffer_h_