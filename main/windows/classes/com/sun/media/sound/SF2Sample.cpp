#include <com/sun/media/sound/SF2Sample.h>

#include <com/sun/media/sound/ModelByteBuffer.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <jcpp.h>

using $ModelByteBuffer = ::com::sun::media::sound::ModelByteBuffer;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SF2Sample_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, 0, $field(SF2Sample, name)},
	{"startLoop", "J", nullptr, 0, $field(SF2Sample, startLoop)},
	{"endLoop", "J", nullptr, 0, $field(SF2Sample, endLoop)},
	{"sampleRate", "J", nullptr, 0, $field(SF2Sample, sampleRate)},
	{"originalPitch", "I", nullptr, 0, $field(SF2Sample, originalPitch)},
	{"pitchCorrection", "B", nullptr, 0, $field(SF2Sample, pitchCorrection)},
	{"sampleLink", "I", nullptr, 0, $field(SF2Sample, sampleLink)},
	{"sampleType", "I", nullptr, 0, $field(SF2Sample, sampleType)},
	{"data", "Lcom/sun/media/sound/ModelByteBuffer;", nullptr, 0, $field(SF2Sample, data)},
	{"data24", "Lcom/sun/media/sound/ModelByteBuffer;", nullptr, 0, $field(SF2Sample, data24)},
	{}
};

$MethodInfo _SF2Sample_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/midi/Soundbank;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)($Soundbank*)>(&SF2Sample::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)()>(&SF2Sample::init$))},
	{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getData24Buffer", "()Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PUBLIC, $method(static_cast<$ModelByteBuffer*(SF2Sample::*)()>(&SF2Sample::getData24Buffer))},
	{"getDataBuffer", "()Lcom/sun/media/sound/ModelByteBuffer;", nullptr, $PUBLIC, $method(static_cast<$ModelByteBuffer*(SF2Sample::*)()>(&SF2Sample::getDataBuffer))},
	{"getEndLoop", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(SF2Sample::*)()>(&SF2Sample::getEndLoop))},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC, $method(static_cast<$AudioFormat*(SF2Sample::*)()>(&SF2Sample::getFormat))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOriginalPitch", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SF2Sample::*)()>(&SF2Sample::getOriginalPitch))},
	{"getPitchCorrection", "()B", nullptr, $PUBLIC, $method(static_cast<int8_t(SF2Sample::*)()>(&SF2Sample::getPitchCorrection))},
	{"getSampleLink", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SF2Sample::*)()>(&SF2Sample::getSampleLink))},
	{"getSampleRate", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(SF2Sample::*)()>(&SF2Sample::getSampleRate))},
	{"getSampleType", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SF2Sample::*)()>(&SF2Sample::getSampleType))},
	{"getStartLoop", "()J", nullptr, $PUBLIC, $method(static_cast<int64_t(SF2Sample::*)()>(&SF2Sample::getStartLoop))},
	{"setData", "(Lcom/sun/media/sound/ModelByteBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)($ModelByteBuffer*)>(&SF2Sample::setData))},
	{"setData", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)($bytes*)>(&SF2Sample::setData))},
	{"setData", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)($bytes*,int32_t,int32_t)>(&SF2Sample::setData))},
	{"setData24", "(Lcom/sun/media/sound/ModelByteBuffer;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)($ModelByteBuffer*)>(&SF2Sample::setData24))},
	{"setData24", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)($bytes*)>(&SF2Sample::setData24))},
	{"setData24", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)($bytes*,int32_t,int32_t)>(&SF2Sample::setData24))},
	{"setEndLoop", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)(int64_t)>(&SF2Sample::setEndLoop))},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)($String*)>(&SF2Sample::setName))},
	{"setOriginalPitch", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)(int32_t)>(&SF2Sample::setOriginalPitch))},
	{"setPitchCorrection", "(B)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)(int8_t)>(&SF2Sample::setPitchCorrection))},
	{"setSampleLink", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)(int32_t)>(&SF2Sample::setSampleLink))},
	{"setSampleRate", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)(int64_t)>(&SF2Sample::setSampleRate))},
	{"setSampleType", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)(int32_t)>(&SF2Sample::setSampleType))},
	{"setStartLoop", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(SF2Sample::*)(int64_t)>(&SF2Sample::setStartLoop))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SF2Sample_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SF2Sample",
	"javax.sound.midi.SoundbankResource",
	nullptr,
	_SF2Sample_FieldInfo_,
	_SF2Sample_MethodInfo_
};

$Object* allocate$SF2Sample($Class* clazz) {
	return $of($alloc(SF2Sample));
}

void SF2Sample::init$($Soundbank* soundBank) {
	$load($AudioInputStream);
	$SoundbankResource::init$(soundBank, nullptr, $AudioInputStream::class$);
	$set(this, name, ""_s);
	this->startLoop = 0;
	this->endLoop = 0;
	this->sampleRate = 0x0000AC44;
	this->originalPitch = 60;
	this->pitchCorrection = (int8_t)0;
	this->sampleLink = 0;
	this->sampleType = 0;
}

void SF2Sample::init$() {
	$load($AudioInputStream);
	$SoundbankResource::init$(nullptr, nullptr, $AudioInputStream::class$);
	$set(this, name, ""_s);
	this->startLoop = 0;
	this->endLoop = 0;
	this->sampleRate = 0x0000AC44;
	this->originalPitch = 60;
	this->pitchCorrection = (int8_t)0;
	this->sampleLink = 0;
	this->sampleType = 0;
}

$Object* SF2Sample::getData() {
	$useLocalCurrentObjectStackCache();
	$var($AudioFormat, format, getFormat());
	$var($InputStream, is, $nc(this->data)->getInputStream());
	if (is == nullptr) {
		return $of(nullptr);
	}
	return $of($new($AudioInputStream, is, format, $nc(this->data)->capacity()));
}

$ModelByteBuffer* SF2Sample::getDataBuffer() {
	return this->data;
}

$ModelByteBuffer* SF2Sample::getData24Buffer() {
	return this->data24;
}

$AudioFormat* SF2Sample::getFormat() {
	return $new($AudioFormat, (float)this->sampleRate, 16, 1, true, false);
}

void SF2Sample::setData($ModelByteBuffer* data) {
	$set(this, data, data);
}

void SF2Sample::setData($bytes* data) {
	$set(this, data, $new($ModelByteBuffer, data));
}

void SF2Sample::setData($bytes* data, int32_t offset, int32_t length) {
	$set(this, data, $new($ModelByteBuffer, data, offset, length));
}

void SF2Sample::setData24($ModelByteBuffer* data24) {
	$set(this, data24, data24);
}

void SF2Sample::setData24($bytes* data24) {
	$set(this, data24, $new($ModelByteBuffer, data24));
}

void SF2Sample::setData24($bytes* data24, int32_t offset, int32_t length) {
	$set(this, data24, $new($ModelByteBuffer, data24, offset, length));
}

$String* SF2Sample::getName() {
	return this->name;
}

void SF2Sample::setName($String* name) {
	$set(this, name, name);
}

int64_t SF2Sample::getEndLoop() {
	return this->endLoop;
}

void SF2Sample::setEndLoop(int64_t endLoop) {
	this->endLoop = endLoop;
}

int32_t SF2Sample::getOriginalPitch() {
	return this->originalPitch;
}

void SF2Sample::setOriginalPitch(int32_t originalPitch) {
	this->originalPitch = originalPitch;
}

int8_t SF2Sample::getPitchCorrection() {
	return this->pitchCorrection;
}

void SF2Sample::setPitchCorrection(int8_t pitchCorrection) {
	this->pitchCorrection = pitchCorrection;
}

int32_t SF2Sample::getSampleLink() {
	return this->sampleLink;
}

void SF2Sample::setSampleLink(int32_t sampleLink) {
	this->sampleLink = sampleLink;
}

int64_t SF2Sample::getSampleRate() {
	return this->sampleRate;
}

void SF2Sample::setSampleRate(int64_t sampleRate) {
	this->sampleRate = sampleRate;
}

int32_t SF2Sample::getSampleType() {
	return this->sampleType;
}

void SF2Sample::setSampleType(int32_t sampleType) {
	this->sampleType = sampleType;
}

int64_t SF2Sample::getStartLoop() {
	return this->startLoop;
}

void SF2Sample::setStartLoop(int64_t startLoop) {
	this->startLoop = startLoop;
}

$String* SF2Sample::toString() {
	return $str({"Sample: "_s, this->name});
}

SF2Sample::SF2Sample() {
}

$Class* SF2Sample::load$($String* name, bool initialize) {
	$loadClass(SF2Sample, name, initialize, &_SF2Sample_ClassInfo_, allocate$SF2Sample);
	return class$;
}

$Class* SF2Sample::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com