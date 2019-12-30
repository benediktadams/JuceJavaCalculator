/*
  ==============================================================================

    CalculatorAndroidBindings.cpp
    Created: 30 Dec 2019 1:44:38pm
    Author:  Benedikt Sailer

  ==============================================================================
*/

#define JUCE_CORE_INCLUDE_JNI_HELPERS 1
#include "Calculator.h"
#include "JuceHeader.h"


static void setCppInstance(JNIEnv* env, jobject javaInstance, Calculator* cppInstance);
static Calculator* getCppInstance (JNIEnv* env, jobject javaInstance);


class CalculatorAndroidBindings
{
public:
    CalculatorAndroidBindings(jobject javaInstance)
    {
        javaCounterpartInstance = getEnv()->NewWeakGlobalRef (javaInstance);
    }

private:
    ScopedJuceInitialiser_GUI juceInitialiser;
    Calculator calculator;
    jweak javaCounterpartInstance = nullptr;


    //==============================================================================
#define JNI_CLASS_MEMBERS(METHOD, STATICMETHOD, FIELD, STATICFIELD, CALLBACK)                   \
   // CALLBACK (constructCalculator,   "constructCalculator",   "(Landroid/content/Context;)V")   \
   // CALLBACK (destroyCalculator,     "destroyCalculator",     "()V")                            \

   // FIELD   (cppCounterpartInstance,    "cppCounterpartInstance", "J")                          \
 //   METHOD (add, "add", "()V")                                                                \

    DECLARE_JNI_CLASS (CalculatorJavaClass, "com/acme/androidcalculator/Calculator")
#undef JNI_CLASS_MEMBERS







};

CalculatorAndroidBindings::CalculatorJavaClass_Class CalculatorAndroidBindings::CalculatorJavaClass;