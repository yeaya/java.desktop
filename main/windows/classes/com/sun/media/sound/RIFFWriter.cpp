#include <com/sun/media/sound/RIFFWriter.h>

#include <com/sun/media/sound/RIFFWriter$RandomAccessByteWriter.h>
#include <com/sun/media/sound/RIFFWriter$RandomAccessFileWriter.h>
#include <com/sun/media/sound/RIFFWriter$RandomAccessWriter.h>
#include <java/io/File.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $RIFFWriter$RandomAccessByteWriter = ::com::sun::media::sound::RIFFWriter$RandomAccessByteWriter;
using $RIFFWriter$RandomAccessFileWriter = ::com::sun::media::sound::RIFFWriter$RandomAccessFileWriter;
using $RIFFWriter$RandomAccessWriter = ::com::sun::media::sound::RIFFWriter$RandomAccessWriter;
using $File = ::java::io::File;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _RIFFWriter_FieldInfo_[] = {
	{"chunktype", "I", nullptr, $PRIVATE, $field(RIFFWriter, chunktype)},
	{"raf", "Lcom/sun/media/sound/RIFFWriter$RandomAccessWriter;", nullptr, $PRIVATE, $field(RIFFWriter, raf)},
	{"chunksizepointer", "J", nullptr, $PRIVATE | $FINAL, $field(RIFFWriter, chunksizepointer)},
	{"startpointer", "J", nullptr, $PRIVATE | $FINAL, $field(RIFFWriter, startpointer)},
	{"childchunk", "Lcom/sun/media/sound/RIFFWriter;", nullptr, $PRIVATE, $field(RIFFWriter, childchunk)},
	{"open", "Z", nullptr, $PRIVATE, $field(RIFFWriter, open)},
	{"writeoverride", "Z", nullptr, $PRIVATE, $field(RIFFWriter, writeoverride)},
	{}
};

$MethodInfo _RIFFWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)($String*,$String*)>(&RIFFWriter::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/File;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)($File*,$String*)>(&RIFFWriter::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/OutputStream;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)($OutputStream*,$String*)>(&RIFFWriter::init$)), "java.io.IOException"},
	{"<init>", "(Lcom/sun/media/sound/RIFFWriter$RandomAccessWriter;Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(static_cast<void(RIFFWriter::*)($RIFFWriter$RandomAccessWriter*,$String*,int32_t)>(&RIFFWriter::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFilePointer", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(RIFFWriter::*)()>(&RIFFWriter::getFilePointer)), "java.io.IOException"},
	{"getWriteOverride", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(RIFFWriter::*)()>(&RIFFWriter::getWriteOverride))},
	{"seek", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)(int64_t)>(&RIFFWriter::seek)), "java.io.IOException"},
	{"setWriteOverride", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)(bool)>(&RIFFWriter::setWriteOverride))},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeByte", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)(int32_t)>(&RIFFWriter::writeByte)), "java.io.IOException"},
	{"writeChunk", "(Ljava/lang/String;)Lcom/sun/media/sound/RIFFWriter;", nullptr, $PUBLIC, $method(static_cast<RIFFWriter*(RIFFWriter::*)($String*)>(&RIFFWriter::writeChunk)), "java.io.IOException"},
	{"writeInt", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)(int32_t)>(&RIFFWriter::writeInt)), "java.io.IOException"},
	{"writeList", "(Ljava/lang/String;)Lcom/sun/media/sound/RIFFWriter;", nullptr, $PUBLIC, $method(static_cast<RIFFWriter*(RIFFWriter::*)($String*)>(&RIFFWriter::writeList)), "java.io.IOException"},
	{"writeLong", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)(int64_t)>(&RIFFWriter::writeLong)), "java.io.IOException"},
	{"writeShort", "(S)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)(int16_t)>(&RIFFWriter::writeShort)), "java.io.IOException"},
	{"writeString", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)($String*)>(&RIFFWriter::writeString)), "java.io.IOException"},
	{"writeString", "(Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)($String*,int32_t)>(&RIFFWriter::writeString)), "java.io.IOException"},
	{"writeUnsignedByte", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)(int32_t)>(&RIFFWriter::writeUnsignedByte)), "java.io.IOException"},
	{"writeUnsignedInt", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)(int64_t)>(&RIFFWriter::writeUnsignedInt)), "java.io.IOException"},
	{"writeUnsignedShort", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(RIFFWriter::*)(int32_t)>(&RIFFWriter::writeUnsignedShort)), "java.io.IOException"},
	{}
};

$InnerClassInfo _RIFFWriter_InnerClassesInfo_[] = {
	{"com.sun.media.sound.RIFFWriter$RandomAccessByteWriter", "com.sun.media.sound.RIFFWriter", "RandomAccessByteWriter", $PRIVATE | $STATIC},
	{"com.sun.media.sound.RIFFWriter$RandomAccessFileWriter", "com.sun.media.sound.RIFFWriter", "RandomAccessFileWriter", $PRIVATE | $STATIC},
	{"com.sun.media.sound.RIFFWriter$RandomAccessWriter", "com.sun.media.sound.RIFFWriter", "RandomAccessWriter", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RIFFWriter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.RIFFWriter",
	"java.io.OutputStream",
	nullptr,
	_RIFFWriter_FieldInfo_,
	_RIFFWriter_MethodInfo_,
	nullptr,
	nullptr,
	_RIFFWriter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.media.sound.RIFFWriter$RandomAccessByteWriter,com.sun.media.sound.RIFFWriter$RandomAccessFileWriter,com.sun.media.sound.RIFFWriter$RandomAccessWriter"
};

$Object* allocate$RIFFWriter($Class* clazz) {
	return $of($alloc(RIFFWriter));
}

void RIFFWriter::init$($String* name, $String* format) {
	RIFFWriter::init$($$new($RIFFWriter$RandomAccessFileWriter, name), format, 0);
}

void RIFFWriter::init$($File* file, $String* format) {
	RIFFWriter::init$($$new($RIFFWriter$RandomAccessFileWriter, file), format, 0);
}

void RIFFWriter::init$($OutputStream* stream, $String* format) {
	RIFFWriter::init$($$new($RIFFWriter$RandomAccessByteWriter, stream), format, 0);
}

void RIFFWriter::init$($RIFFWriter$RandomAccessWriter* raf, $String* format, int32_t chunktype) {
	$useLocalCurrentObjectStackCache();
	$OutputStream::init$();
	this->chunktype = 0;
	$set(this, childchunk, nullptr);
	this->open = true;
	this->writeoverride = false;
	if (chunktype == 0) {
		if ($nc(raf)->length() != 0) {
			raf->setLength(0);
		}
	}
	$set(this, raf, raf);
	if ($nc(raf)->getPointer() % 2 != 0) {
		raf->write(0);
	}
	if (chunktype == 0) {
		$nc(raf)->write($("RIFF"_s->getBytes("ascii"_s)));
	} else if (chunktype == 1) {
		$nc(raf)->write($("LIST"_s->getBytes("ascii"_s)));
	} else {
		$nc(raf)->write($($($nc(($$str({format, "    "_s})))->substring(0, 4))->getBytes("ascii"_s)));
	}
	this->chunksizepointer = $nc(raf)->getPointer();
	this->chunktype = 2;
	writeUnsignedInt(0);
	this->chunktype = chunktype;
	this->startpointer = raf->getPointer();
	if (chunktype != 2) {
		raf->write($($($nc(($$str({format, "    "_s})))->substring(0, 4))->getBytes("ascii"_s)));
	}
}

void RIFFWriter::seek(int64_t pos) {
	$nc(this->raf)->seek(pos);
}

int64_t RIFFWriter::getFilePointer() {
	return $nc(this->raf)->getPointer();
}

void RIFFWriter::setWriteOverride(bool writeoverride) {
	this->writeoverride = writeoverride;
}

bool RIFFWriter::getWriteOverride() {
	return this->writeoverride;
}

void RIFFWriter::close() {
	if (!this->open) {
		return;
	}
	if (this->childchunk != nullptr) {
		$nc(this->childchunk)->close();
		$set(this, childchunk, nullptr);
	}
	int32_t bakchunktype = this->chunktype;
	int64_t fpointer = $nc(this->raf)->getPointer();
	$nc(this->raf)->seek(this->chunksizepointer);
	this->chunktype = 2;
	writeUnsignedInt(fpointer - this->startpointer);
	if (bakchunktype == 0) {
		$nc(this->raf)->close();
	} else {
		$nc(this->raf)->seek(fpointer);
	}
	this->open = false;
	$set(this, raf, nullptr);
}

void RIFFWriter::write(int32_t b) {
	if (!this->writeoverride) {
		if (this->chunktype != 2) {
			$throwNew($IllegalArgumentException, "Only chunks can write bytes!"_s);
		}
		if (this->childchunk != nullptr) {
			$nc(this->childchunk)->close();
			$set(this, childchunk, nullptr);
		}
	}
	$nc(this->raf)->write(b);
}

void RIFFWriter::write($bytes* b, int32_t off, int32_t len) {
	if (!this->writeoverride) {
		if (this->chunktype != 2) {
			$throwNew($IllegalArgumentException, "Only chunks can write bytes!"_s);
		}
		if (this->childchunk != nullptr) {
			$nc(this->childchunk)->close();
			$set(this, childchunk, nullptr);
		}
	}
	$nc(this->raf)->write(b, off, len);
}

RIFFWriter* RIFFWriter::writeList($String* format) {
	if (this->chunktype == 2) {
		$throwNew($IllegalArgumentException, "Only LIST and RIFF can write lists!"_s);
	}
	if (this->childchunk != nullptr) {
		$nc(this->childchunk)->close();
		$set(this, childchunk, nullptr);
	}
	$set(this, childchunk, $new(RIFFWriter, this->raf, format, 1));
	return this->childchunk;
}

RIFFWriter* RIFFWriter::writeChunk($String* format) {
	if (this->chunktype == 2) {
		$throwNew($IllegalArgumentException, "Only LIST and RIFF can write chunks!"_s);
	}
	if (this->childchunk != nullptr) {
		$nc(this->childchunk)->close();
		$set(this, childchunk, nullptr);
	}
	$set(this, childchunk, $new(RIFFWriter, this->raf, format, 2));
	return this->childchunk;
}

void RIFFWriter::writeString($String* string) {
	$var($bytes, buff, $nc(string)->getBytes());
	write(buff);
}

void RIFFWriter::writeString($String* string, int32_t len) {
	$var($bytes, buff, $nc(string)->getBytes());
	if (buff->length > len) {
		write(buff, 0, len);
	} else {
		write(buff);
		for (int32_t i = buff->length; i < len; ++i) {
			write(0);
		}
	}
}

void RIFFWriter::writeByte(int32_t b) {
	write(b);
}

void RIFFWriter::writeShort(int16_t b) {
	write((int32_t)(((int32_t)((uint32_t)b >> 0)) & (uint32_t)255));
	write((int32_t)(((int32_t)((uint32_t)b >> 8)) & (uint32_t)255));
}

void RIFFWriter::writeInt(int32_t b) {
	write((int32_t)(((int32_t)((uint32_t)b >> 0)) & (uint32_t)255));
	write((int32_t)(((int32_t)((uint32_t)b >> 8)) & (uint32_t)255));
	write((int32_t)(((int32_t)((uint32_t)b >> 16)) & (uint32_t)255));
	write((int32_t)(((int32_t)((uint32_t)b >> 24)) & (uint32_t)255));
}

void RIFFWriter::writeLong(int64_t b) {
	write((int32_t)((int32_t)((int64_t)((uint64_t)b >> 0)) & (uint32_t)255));
	write((int32_t)((int32_t)((int64_t)((uint64_t)b >> 8)) & (uint32_t)255));
	write((int32_t)((int32_t)((int64_t)((uint64_t)b >> 16)) & (uint32_t)255));
	write((int32_t)((int32_t)((int64_t)((uint64_t)b >> 24)) & (uint32_t)255));
	write((int32_t)((int32_t)((int64_t)((uint64_t)b >> 32)) & (uint32_t)255));
	write((int32_t)((int32_t)((int64_t)((uint64_t)b >> 40)) & (uint32_t)255));
	write((int32_t)((int32_t)((int64_t)((uint64_t)b >> 48)) & (uint32_t)255));
	write((int32_t)((int32_t)((int64_t)((uint64_t)b >> 56)) & (uint32_t)255));
}

void RIFFWriter::writeUnsignedByte(int32_t b) {
	writeByte((int8_t)b);
}

void RIFFWriter::writeUnsignedShort(int32_t b) {
	writeShort((int16_t)b);
}

void RIFFWriter::writeUnsignedInt(int64_t b) {
	writeInt((int32_t)b);
}

RIFFWriter::RIFFWriter() {
}

$Class* RIFFWriter::load$($String* name, bool initialize) {
	$loadClass(RIFFWriter, name, initialize, &_RIFFWriter_ClassInfo_, allocate$RIFFWriter);
	return class$;
}

$Class* RIFFWriter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com