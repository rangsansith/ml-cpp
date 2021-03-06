/*
 * Copyright Elasticsearch B.V. and/or licensed to Elasticsearch B.V. under one
 * or more contributor license agreements. Licensed under the Elastic License;
 * you may not use this file except in compliance with the Elastic License.
 */

#ifndef INCLUDED_CEventRatePopulationModelTest_h
#define INCLUDED_CEventRatePopulationModelTest_h

#include <model/CResourceMonitor.h>

#include <cppunit/extensions/HelperMacros.h>

class CEventRatePopulationModelTest : public CppUnit::TestFixture {
public:
    void testBasicAccessors();
    void testFeatures();
    void testComputeProbability();
    void testPrune();
    void testKey();
    void testFrequency();
    void testSampleRateWeight();
    void testSkipSampling();
    void testInterimCorrections();
    void testPeriodicity();
    void testPersistence();
    void testIgnoreSamplingGivenDetectionRules();

    static CppUnit::Test* suite();

private:
    ml::model::CResourceMonitor m_ResourceMonitor;
};

#endif // INCLUDED_CEventRatePopulationModelTest_h
