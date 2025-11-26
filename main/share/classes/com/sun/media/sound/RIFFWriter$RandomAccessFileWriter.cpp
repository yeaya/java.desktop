#include <com/sun/media/sound/RIFFWriter$RandomAccessFileWriter.h>

#include <com/sun/media/sound/RIFFWriter.h>
#include <java/io/File.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $RIFFWriter = ::com::sun::media::sound::RIFFWriter;
using $RIFFWriter$RandomAccessWriter = ::com::sun::media::sound::RIFFWriter$RandomAccessWriter;
using $File = ::java::io::File;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _RIFFWriter$RandomAccessFileWriter_FieldInfo_[] = {
	{"raf", "Ljava/io/RandomAccessFile;", nullptr, 0, $field(RIFFWriter$RandomAccessFileWriter, raf)},
	{}
};

$MethodInfo _RIFFWriter$RandomAccessFileWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(RIFFWriter$RandomAccessFileWriter::*)($File*)>(&RIFFWriter$RandomAccessFileWriter::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(RIFFWriter$RandomAccessFileWriter::*)($String*)>(&RIFFWriter$RandomAccessFileWriter::init$)), "java.io.FileNotFoundException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getPointer", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"length", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"seek", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setLength", "(J)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _RIFFWriter$RandomAccessFileWriter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.RIFFWriter$RandomAccessFileWriter", "com.sun.media.sound.RIFFWriter", "RandomAccessFileWriter", $PRIVATE | $STATIC},
	{"com.sun.media.sound.RIFFWriter$RandomAccessWriter", "com.sun.media.sound.RIFFWriter", "RandomAccessWriter", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RIFFWriter$RandomAccessFileWriter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.media.sound.RIFFWriter$RandomAccessFileWriter",
	"java.lang.Object",
	"com.sun.media.sound.RIFFWriter$RandomAccessWriter",
	_RIFFWriter$RandomAccessFileWriter_FieldInfo_,
	_RIFFWriter$RandomAccessFileWriter_MethodInfo_,
	nullptr,
	nullptr,
	_RIFFWriter$RandomAccessFileWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.RIFFWriter"
};

$Object* allocate$RIFFWriter$RandomAccessFileWriter($Class* clazz) {
	return $of($alloc(RIFFWriter$RandomAccessFileWriter));
}

void RIFFWriter$RandomAccessFileWriter::init$($File* file) {
	$set(this, raf, $new($RandomAccessFile, file, "rw"_s));
}

void RIFFWriter$RandomAccessFileWriter::init$($String* name) {
	$set(this, raf, $new($RandomAccessFile, name, "rw"_s));
}

void RIFFWriter$RandomAccessFileWriter::seek(int64_t chunksizepointer) {
	$nc(this->raf)->seek(chunksizepointer);
}

int64_t RIFFWriter$RandomAccessFileWriter::getPointer() {
	return $nc(this->raf)->getFilePointer();
}

void RIFFWriter$RandomAccessFileWriter::close() {
	$nc(this->raf)->close();
}

void RIFFWriter$RandomAccessFileWriter::write(int32_t b) {
	$nc(this->raf)->write(b);
}

void RIFFWriter$RandomAccessFileWriter::write($bytes* b, int32_t off, int32_t len) {
	$nc(this->raf)->write(b, off, len);
}

void RIFFWriter$RandomAccessFileWriter::write($bytes* bytes) {
	$nc(this->raf)->write(bytes);
}

int64_t RIFFWriter$RandomAccessFileWriter::length() {
	return $nc(this->raf)->length();
}

void RIFFWriter$RandomAccessFileWriter::setLength(int64_t i) {
	$nc(this->raf)->setLength(i);
}

RIFFWriter$RandomAccessFileWriter::RIFFWriter$RandomAccessFileWriter() {
}

$Class* RIFFWriter$RandomAccessFileWriter::load$($String* name, bool initialize) {
	$loadClass(RIFFWriter$RandomAccessFileWriter, name, initialize, &_RIFFWriter$RandomAccessFileWriter_ClassInfo_, allocate$RIFFWriter$RandomAccessFileWriter);
	return class$;
}

$Class* RIFFWriter$RandomAccessFileWriter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com