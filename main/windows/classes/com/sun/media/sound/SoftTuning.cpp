#include <com/sun/media/sound/SoftTuning.h>

#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <javax/sound/midi/Patch.h>
#include <jcpp.h>

using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Patch = ::javax::sound::midi::Patch;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftTuning_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SoftTuning, name)},
	{"tuning", "[D", nullptr, $PRIVATE | $FINAL, $field(SoftTuning, tuning)},
	{"patch", "Ljavax/sound/midi/Patch;", nullptr, $PRIVATE, $field(SoftTuning, patch)},
	{}
};

$MethodInfo _SoftTuning_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SoftTuning::*)()>(&SoftTuning::init$))},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(SoftTuning::*)($bytes*)>(&SoftTuning::init$))},
	{"<init>", "(Ljavax/sound/midi/Patch;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftTuning::*)($Patch*)>(&SoftTuning::init$))},
	{"<init>", "(Ljavax/sound/midi/Patch;[B)V", nullptr, $PUBLIC, $method(static_cast<void(SoftTuning::*)($Patch*,$bytes*)>(&SoftTuning::init$))},
	{"checksumOK", "([B)Z", nullptr, $PRIVATE, $method(static_cast<bool(SoftTuning::*)($bytes*)>(&SoftTuning::checksumOK))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SoftTuning::*)()>(&SoftTuning::getName))},
	{"getPatch", "()Ljavax/sound/midi/Patch;", nullptr, $PUBLIC, $method(static_cast<$Patch*(SoftTuning::*)()>(&SoftTuning::getPatch))},
	{"getTuning", "()[D", nullptr, $PUBLIC, $method(static_cast<$doubles*(SoftTuning::*)()>(&SoftTuning::getTuning))},
	{"getTuning", "(I)D", nullptr, $PUBLIC, $method(static_cast<double(SoftTuning::*)(int32_t)>(&SoftTuning::getTuning))},
	{"load", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(SoftTuning::*)($bytes*)>(&SoftTuning::load))},
	{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SoftTuning::*)($String*)>(&SoftTuning::setName))},
	{}
};

$ClassInfo _SoftTuning_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftTuning",
	"java.lang.Object",
	nullptr,
	_SoftTuning_FieldInfo_,
	_SoftTuning_MethodInfo_
};

$Object* allocate$SoftTuning($Class* clazz) {
	return $of($alloc(SoftTuning));
}

void SoftTuning::init$() {
	$set(this, name, nullptr);
	$set(this, tuning, $new($doubles, 128));
	$set(this, patch, nullptr);
	$set(this, name, "12-TET"_s);
	for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
		$nc(this->tuning)->set(i, (double)(i * 100));
	}
}

void SoftTuning::init$($bytes* data) {
	$set(this, name, nullptr);
	$set(this, tuning, $new($doubles, 128));
	$set(this, patch, nullptr);
	for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
		$nc(this->tuning)->set(i, (double)(i * 100));
	}
	load(data);
}

void SoftTuning::init$($Patch* patch) {
	$set(this, name, nullptr);
	$set(this, tuning, $new($doubles, 128));
	$set(this, patch, nullptr);
	$set(this, patch, patch);
	$set(this, name, "12-TET"_s);
	for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
		$nc(this->tuning)->set(i, (double)(i * 100));
	}
}

void SoftTuning::init$($Patch* patch, $bytes* data) {
	$set(this, name, nullptr);
	$set(this, tuning, $new($doubles, 128));
	$set(this, patch, nullptr);
	$set(this, patch, patch);
	for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
		$nc(this->tuning)->set(i, (double)(i * 100));
	}
	load(data);
}

bool SoftTuning::checksumOK($bytes* data) {
	int32_t x = (int32_t)($nc(data)->get(1) & (uint32_t)255);
	for (int32_t i = 2; i < data->length - 2; ++i) {
		x = x ^ ((int32_t)(data->get(i) & (uint32_t)255));
	}
	return ((int32_t)(data->get(data->length - 2) & (uint32_t)255)) == ((int32_t)(x & (uint32_t)127));
}

void SoftTuning::load($bytes* data) {
	$useLocalCurrentObjectStackCache();
	if (((int32_t)($nc(data)->get(1) & (uint32_t)255)) == 126 || ((int32_t)($nc(data)->get(1) & (uint32_t)255)) == 127) {
		int32_t subid1 = (int32_t)(data->get(3) & (uint32_t)255);
		{
			int32_t subid2 = 0;
			switch (subid1) {
			case 8:
				{
					subid2 = (int32_t)(data->get(4) & (uint32_t)255);
					{
						int32_t ll = 0;
						int32_t r = 0;
						switch (subid2) {
						case 1:
							{
								{
									try {
										$set(this, name, $new($String, data, 6, 16, "ascii"_s));
									} catch ($UnsupportedEncodingException&) {
										$var($UnsupportedEncodingException, e, $catch());
										$set(this, name, nullptr);
									}
									int32_t r = 22;
									for (int32_t i = 0; i < 128; ++i) {
										int32_t xx = (int32_t)(data->get(r++) & (uint32_t)255);
										int32_t yy = (int32_t)(data->get(r++) & (uint32_t)255);
										int32_t zz = (int32_t)(data->get(r++) & (uint32_t)255);
										if (!(xx == 127 && yy == 127 && zz == 127)) {
											$nc(this->tuning)->set(i, 100.0 * (((xx * 16384) + (yy * 128) + zz) / 16384.0));
										}
									}
									break;
								}
							}
						case 2:
							{
								{
									int32_t ll = (int32_t)(data->get(6) & (uint32_t)255);
									int32_t r = 7;
									for (int32_t i = 0; i < ll; ++i) {
										int32_t kk = (int32_t)(data->get(r++) & (uint32_t)255);
										int32_t xx = (int32_t)(data->get(r++) & (uint32_t)255);
										int32_t yy = (int32_t)(data->get(r++) & (uint32_t)255);
										int32_t zz = (int32_t)(data->get(r++) & (uint32_t)255);
										if (!(xx == 127 && yy == 127 && zz == 127)) {
											$nc(this->tuning)->set(kk, 100.0 * (((xx * 16384) + (yy * 128) + zz) / 16384.0));
										}
									}
									break;
								}
							}
						case 4:
							{
								{
									if (!checksumOK(data)) {
										break;
									}
									try {
										$set(this, name, $new($String, data, 7, 16, "ascii"_s));
									} catch ($UnsupportedEncodingException&) {
										$var($UnsupportedEncodingException, e, $catch());
										$set(this, name, nullptr);
									}
									int32_t r = 23;
									for (int32_t i = 0; i < 128; ++i) {
										int32_t xx = (int32_t)(data->get(r++) & (uint32_t)255);
										int32_t yy = (int32_t)(data->get(r++) & (uint32_t)255);
										int32_t zz = (int32_t)(data->get(r++) & (uint32_t)255);
										if (!(xx == 127 && yy == 127 && zz == 127)) {
											$nc(this->tuning)->set(i, 100.0 * (((xx * 16384) + (yy * 128) + zz) / 16384.0));
										}
									}
									break;
								}
							}
						case 5:
							{
								{
									if (!checksumOK(data)) {
										break;
									}
									try {
										$set(this, name, $new($String, data, 7, 16, "ascii"_s));
									} catch ($UnsupportedEncodingException&) {
										$var($UnsupportedEncodingException, e, $catch());
										$set(this, name, nullptr);
									}
									$var($ints, octave_tuning, $new($ints, 12));
									for (int32_t i = 0; i < 12; ++i) {
										octave_tuning->set(i, ((int32_t)(data->get(i + 23) & (uint32_t)255)) - 64);
									}
									for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
										$nc(this->tuning)->set(i, (double)(i * 100 + octave_tuning->get(i % 12)));
									}
									break;
								}
							}
						case 6:
							{
								{
									if (!checksumOK(data)) {
										break;
									}
									try {
										$set(this, name, $new($String, data, 7, 16, "ascii"_s));
									} catch ($UnsupportedEncodingException&) {
										$var($UnsupportedEncodingException, e, $catch());
										$set(this, name, nullptr);
									}
									$var($doubles, octave_tuning, $new($doubles, 12));
									for (int32_t i = 0; i < 12; ++i) {
										int32_t v = ((int32_t)(data->get(i * 2 + 23) & (uint32_t)255)) * 128 + ((int32_t)(data->get(i * 2 + 24) & (uint32_t)255));
										octave_tuning->set(i, (v / 8192.0 - 1) * 100.0);
									}
									for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
										$nc(this->tuning)->set(i, i * 100 + octave_tuning->get(i % 12));
									}
									break;
								}
							}
						case 7:
							{
								ll = (int32_t)(data->get(7) & (uint32_t)255);
								r = 8;
								for (int32_t i = 0; i < ll; ++i) {
									int32_t kk = (int32_t)(data->get(r++) & (uint32_t)255);
									int32_t xx = (int32_t)(data->get(r++) & (uint32_t)255);
									int32_t yy = (int32_t)(data->get(r++) & (uint32_t)255);
									int32_t zz = (int32_t)(data->get(r++) & (uint32_t)255);
									if (!(xx == 127 && yy == 127 && zz == 127)) {
										$nc(this->tuning)->set(kk, 100.0 * (((xx * 16384) + (yy * 128) + zz) / 16384.0));
									}
								}
								break;
							}
						case 8:
							{
								{
									$var($ints, octave_tuning, $new($ints, 12));
									for (int32_t i = 0; i < 12; ++i) {
										octave_tuning->set(i, ((int32_t)(data->get(i + 8) & (uint32_t)255)) - 64);
									}
									for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
										$nc(this->tuning)->set(i, (double)(i * 100 + octave_tuning->get(i % 12)));
									}
									break;
								}
							}
						case 9:
							{
								{
									$var($doubles, octave_tuning, $new($doubles, 12));
									for (int32_t i = 0; i < 12; ++i) {
										int32_t v = ((int32_t)(data->get(i * 2 + 8) & (uint32_t)255)) * 128 + ((int32_t)(data->get(i * 2 + 9) & (uint32_t)255));
										octave_tuning->set(i, (v / 8192.0 - 1) * 100.0);
									}
									for (int32_t i = 0; i < $nc(this->tuning)->length; ++i) {
										$nc(this->tuning)->set(i, i * 100 + octave_tuning->get(i % 12));
									}
									break;
								}
							}
						default:
							{
								break;
							}
						}
					}
				}
			}
		}
	}
}

$doubles* SoftTuning::getTuning() {
	return $Arrays::copyOf(this->tuning, $nc(this->tuning)->length);
}

double SoftTuning::getTuning(int32_t noteNumber) {
	return $nc(this->tuning)->get(noteNumber);
}

$Patch* SoftTuning::getPatch() {
	return this->patch;
}

$String* SoftTuning::getName() {
	return this->name;
}

void SoftTuning::setName($String* name) {
	$set(this, name, name);
}

SoftTuning::SoftTuning() {
}

$Class* SoftTuning::load$($String* name, bool initialize) {
	$loadClass(SoftTuning, name, initialize, &_SoftTuning_ClassInfo_, allocate$SoftTuning);
	return class$;
}

$Class* SoftTuning::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com