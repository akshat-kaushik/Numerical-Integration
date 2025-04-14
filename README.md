<h1>NUMERICAL INTEGRATION</h1>
<BR>
<p>This is a C program used to calculate the approximate value of an integral when an exact solution is difficult or impossible to obtain analytically.</p>
<BR>
<p>In this program we have used 3 basic methods to solve integral:-</p>
<ol>
<li>
<dl>
<dt><h2>Trapezoidal Rule</h2></dt>
    <dd>The Trapezoidal Rule is a simple and popular way to estimate the value of an integral when solving it exactly is tricky. The idea is to break the area under the curve into small trapezoids (shapes with two parallel sides) instead of dealing with the curve directly. Since calculating the area of a trapezoid is easier, this method helps us get a close approximation of the actual integral.</dd>
</dl>
<BR>
<ul>
    <h3>Concept:</h3>
    <li>The interval ([a, b]) is divided into (n) subintervals of equal width (h).</li>
    <li>The values of the function (f(x)) are calculated at the endpoints of each subinterval.</li>
    <li>By connecting these points with straight lines, trapezoids are formed.</li>
    <li>The areas of these trapezoids are then summed to approximate the total area under the curve.</li>
    <BR>
    <h3>Formula:</h3>
        <p>∫ba f(x) dx = Area Under the Curve = (Δx/2) [y0 + 2 (y1 + y2 + y3 + ….. + yn-1) + yn]</p>
        <p>where Δx = (b – a)/n</p>
</ul>        
</li>
<li>
<dl>
<dt><h2>Simpson's 1/3 Rule</h2></dt>
    <dd>Simpson's 1/3 Rule is a popular method for numerical integration that provides a more accurate approximation of a definite integral compared to the Trapezoidal Rule. It works by approximating the curve of the function using parabolic segments, which fit the shape of the curve better than straight lines.</dd>
</dl>
<BR>
<ul>
    <h3>Concept:</h3>
    <li>Divide the interval ([a, b]) into an even number of subintervals ((n)), each of width (h).</li>
    <li>
    <ul><p>The function values at the endpoints and intermediate points are multiplied by appropriate weights:</p>
        <li>The endpoints ((f(x_0)) and (f(x_n))) have a weight of 1.</li>
        <li>Odd-indexed points ((f(x_1), f(x_3), ..., f(x_{n-1}))) have a weight of 4.</li>
        <li>Even-indexed points ((f(x_2), f(x_4), ..., f(x_{n-2}))) have a weight of 2.</li>
    </ul>
    </li>
    <li>Sum all these weighted terms and multiply by (\frac{h}{3}) to get the approximate integral.</li>
    <BR>
    <h3>Formula:</h3>
        <p>ₐ∫ᵇ f (x) dx = h/3 [(y₀ + yₙ) + 4 (y₁ + y₃ + ..) + 2(y₂ + y₄ + ..)]</p>
</ul>
</li>
<li>
<dl>
<dt><h2>Simpson's 3/8 rule</h2></dt>
    <dd>This is another method for numerical integration, similar to Simpson's 1/3 Rule, but it uses cubic polynomials (third-degree) instead of parabolas for approximation. It works best for cases where the number of subintervals is a multiple of 3.</dd>
</dl>
<BR>
<ul>
    <h3>Concept:</h3>
    <li>Divide the interval ([a, b]) into subintervals of equal width, (h), ensuring that the total number of subintervals ((n)) is a multiple of 3.</li>
    <li>Calculate the function values at all the points dividing the interval.</li>
    <li>
    <ul><p>Assign the coefficients in the formula:</p>
        <li>Endpoint terms ((f(x_0)) and (f(x_n))) are multiplied by 1.</li>
        <li>Intermediate terms alternate between coefficients of 3 and 2, depending on their positions.</li>
    </ul>
    </li>
    <li>Multiply the result by 3h/8 to get the approximate integral.</li>
    <BR>
    <h3>Formula:</h3>
        <p>ₐ∫ᵇ f (x) dx = 3h/8[(y₀ + yₙ) + 3(y₁ + y₂ + y₄ + …) + 2(y₃ + y₆ +…)]</p>
    <BR>
</ul>
</li>
</ol>
<p><b>You can execute the program ./main command.</b></p>
<BR>
<h2>Conclusion:-</h2>
    <p>To sum up, numerical integration methods, such as the Trapezoidal Rule, Simpson's 1/3 Rule, and Simpson's 3/8 Rule, are practical tools for estimating the value of definite integrals when exact solutions are challenging to compute.</p>
<BR>
<p>====================THANKYOU====================</p>