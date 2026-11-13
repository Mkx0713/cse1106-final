# Smart Classroom Comfort Monitor – Test Report

## Testing Overview
The program was tested by our TA using three different temperature inputs to verify that the LED responds correctly based on the hardcoded comfort range of 68°F–76°F.

## Test Results

**Test 1:**
- Input Temperature: 100°F
- Expected LED: ON
- Actual LED: ON
- Result: PASS

**Test 2:**
- Input Temperature: 20°F
- Expected LED: ON
- Actual LED: ON
- Result: PASS

**Test 3:**
- Input Temperature: 74°F
- Expected LED: OFF
- Actual LED: OFF
- Result: PASS

## Conclusion
All three test cases passed successfully. When the temperature was outside the comfort range, the LED turned ON to indicate a warning. When the temperature was within the comfort range, the LED remained OFF.

The results confirm that the program correctly identifies normal and abnormal temperatures and controls the LED as expected.
