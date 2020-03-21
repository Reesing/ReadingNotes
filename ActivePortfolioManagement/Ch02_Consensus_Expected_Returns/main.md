# Chapter02 Consensus Expected Returns: The Capital Asset Pricing Model

## Introduction

- This chapter is an **exposition** of CAPM, not a **defense**. The exploration has two purpose:
    - to establish the humility principle. It is not easy to be a successful active manager.
    - much of the analysis developed in CAPM can be used in quantitive active management.

- One of the valuable by-products of CAPM : a procedure for determining consensus expected returns.

- Major points of this chapter:
    - Stock return can be seperated into [ **a systematic (market) component** ] and [ **a residual component** ].
    - CAPM says that **expected value of residual return is 0**.
    - There is a powerful logic of market efficiency behind CAPM.
    - CAPM suggests that passive management is a lower-risk alternative to active management.
    - CAPM provides a valuable source of consensus expectations.
    - CAPM is about expected returns, not risk.

- When selecting portfolios according to mean/variance perferences,
    - CAPM forecasts of expected returns -> portfolios consist of market positions and risk-free asset.
    - optimal mean/variance portfolios differ from market portfolio and cash, if and only if the forecast excess returns differ from CAPM consensus expected return.

## Seperation of Return

- In practice, the [ market portfolio ] is taken as some [ broad value-weighted index of traded domestic equities ].

- **excess returns** = total returns - total return on risk-free asset

- Beta of portfolio P:

    <a href="https://www.codecogs.com/eqnedit.php?latex=\beta_P&space;=&space;\frac{\textup{Cov}(r_P,r_M)}{\textup{Var}(r_M)}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\beta_P&space;=&space;\frac{\textup{Cov}(r_P,r_M)}{\textup{Var}(r_M)}" title="\beta_P = \frac{\textup{Cov}(r_P,r_M)}{\textup{Var}(r_M)}" /></a>

    It is a **forecast** of the future, a **forward-looking** concept.

- Historical/realized beta is a reasonable forecast of the beta.

    <a href="https://www.codecogs.com/eqnedit.php?latex=r_P(t)=\alpha_P&plus;\beta_P\cdot&space;r_M(t)&plus;\epsilon&space;_P(t)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?r_P(t)=\alpha_P&plus;\beta_P\cdot&space;r_M(t)&plus;\epsilon&space;_P(t)" title="r_P(t)=\alpha_P+\beta_P\cdot r_M(t)+\epsilon _P(t)" /></a>

    - Betas tends to regress toward the mean.
    - Forecasts of betas based on the fundamental attributes of the company is much better forecasts of future betas than its historical returns.

    ***HOMEWORK ：比较A股股票的 realized beta 与 predited beta.***


- Beta is a way of separating risk and return into two parts.
    - excess return = market component + residual component

        <a href="https://www.codecogs.com/eqnedit.php?latex=r_P=\beta_Pr_M&plus;\theta_P" target="_blank"><img src="https://latex.codecogs.com/gif.latex?r_P=\beta_Pr_M&plus;\theta_P" title="r_P=\beta_Pr_M+\theta_P" /></a>
    
    - residual return 
    <a href="https://www.codecogs.com/eqnedit.php?latex=\theta_P" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\theta_P" title="\theta_P" /></a>
    is uncorrelated with the market return
    <a href="https://www.codecogs.com/eqnedit.php?latex=r_M" target="_blank"><img src="https://latex.codecogs.com/gif.latex?r_M" title="r_M" /></a>
    .

    - variance of portfolio decomposition:

        <a href="https://www.codecogs.com/eqnedit.php?latex=\sigma_P^2=\beta_P^2\sigma_M^2&plus;\omega_P^2" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\sigma_P^2=\beta_P^2\sigma_M^2&plus;\omega_P^2" title="\sigma_P^2=\beta_P^2\sigma_M^2+\omega_P^2" /></a>

## The CAPM

- Assumption:
    - All investors have the same expectations.
    - They differ only in their *tolerance for risk*.

- Main conclusions:
    - Under the CAPM, the **expected residual return** on any stock or portfolio is zero. 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\textup{E}\[\theta_P\]=0" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\textup{E}\[\theta_P\]=0" title="\textup{E}\[\theta_P\]=0" /></a>


    - **Expected excess returns** are proportional to the stock's (or portfolio's) beta.

        <a href="https://www.codecogs.com/eqnedit.php?latex=\textup{E}\[r_P\]=\mu_P=\beta_P\textup{E}\[r_M\]=\beta_P\mu_M" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\textup{E}\[r_P\]=\mu_P=\beta_P\textup{E}\[r_M\]=\beta_P\mu_M" title="\textup{E}\[r_P\]=\mu_P=\beta_P\textup{E}\[r_M\]=\beta_P\mu_M" /></a>

## The CAPM is Sensible

- Investors are compensated for taking necessary risks, not for unnecessary risks.
    - Market risk is in escapable.
    - All investors can avoid residual risk.

- Investors who don't think they have superior information should hold the market portfolio.

## The CAPM and Efficient Markets Theory

- Three strengths: weak, semistrong, strong.

## Relevance for Active Managers

- CAPM is based on not quite accurate assumptions.

- There is no need to forecast the expected excess market return if you control beta.

- The manager can focus on forecasting residual returns.

- CAPM helps the active manager to 
    - avoid the risk of **market timing**
    - focus on **residual returns** that have a consensus expectation of zero.

## Technical Appendix

### Mathematical Notation

- In general

    Type | Notaion | Example
    :-:|:-:|:-:
    scalar | plain text | <a href="https://www.codecogs.com/eqnedit.php?latex=a" target="_blank"><img src="https://latex.codecogs.com/gif.latex?a" title="a" /></a>
    vector | bold lowercase letter | <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}" title="\mathbf{h}" /></a>
    matrix | bold uppercase letter | <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{V}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{V}" title="\mathbf{V}" /></a>

- Specifically

    Letter | Type | Meaning | Comments
    :-:|:-:|:-:|:-:
    <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}" title="\mathbf{h}" /></a> | vector | risky asset **holdings** | a portfolio's weights in each asset
    <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{f}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{f}" title="\mathbf{f}" /></a> | vector | **expected excess returns** | -
    <a href="https://www.codecogs.com/eqnedit.php?latex=\boldsymbol{\mu}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\boldsymbol{\mu}" title="\boldsymbol{\mu}" /></a>| vector | **expected excess returns *under CAPM*** | CAPM holds when <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{f}&space;=&space;\boldsymbol{\mu}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{f}&space;=&space;\boldsymbol{\mu}" title="\mathbf{f} = \boldsymbol{\mu}" /></a>
    <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{V}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{V}" title="\mathbf{V}" /></a> | matrix | **covariance matrix of excess returns**</br>for the risky assets | assumed nonsingular
    <a href="https://www.codecogs.com/eqnedit.php?latex=\boldsymbol{\beta}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\boldsymbol{\beta}" title="\boldsymbol{\beta}" /></a>| vector | asset betas | -
    <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{e}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{e}" title="\mathbf{e}" /></a>| vector | ones | <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{e}=\left&space;[&space;1,1,...,1&space;\right&space;]^T" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{e}=\left&space;[&space;1,1,...,1&space;\right&space;]^T" title="\mathbf{e}=\left [ 1,1,...,1 \right ]^T" /></a> </br><a href="https://www.codecogs.com/eqnedit.php?latex=e_n&space;=1" target="_blank"><img src="https://latex.codecogs.com/gif.latex?e_n&space;=1" title="e_n =1" /></a>

### Assumptions

+ Consider a single period with *no rebalancing* of the portfolio within the period.

- Underlying assumptions:
    - A **risk-free asset** exsits.
    - All first and second moments exsit.
    - It is not possible to build **a fully invested portfolio that has zero risk**.
    - The **expected excess return on portfolio C** is positive.
        - Portfolio C is the fully invested portfolio with minimum risk.


### Characteristic Portfolios

- We associate a **characteristic portfolio** with each asset **attribute**.
    - The characteristic porfolio **uniquely** capture the defining attribute.
    - **Reversibly**, we can start with a portfolio and find the attribute this portfolio expresses most effectively.

- Let 

    <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{a}=\left&space;\[&space;a_1,a_2,...,a_N&space;\right&space;\]^T" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{a}=\left&space;\[&space;a_1,a_2,...,a_N&space;\right&space;\]^T" title="\mathbf{a}=\left \[ a_1,a_2,...,a_N \right \]^T" /></a>

    be any vector of asset **attributes/characteristics**.

    The exposure of portfolio <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_P" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_P" title="\mathbf{h}_P" /></a> to attribute <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{a}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{a}" title="\mathbf{a}" /></a>  is 
   
    <a href="https://www.codecogs.com/eqnedit.php?latex=a_P&space;=&space;\sum_{n=1}^N&space;a_nh_{P,n}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?a_P&space;=&space;\sum_{n=1}^N&space;a_nh_{P,n}" title="a_P = \sum_{n=1}^N a_nh_{P,n}" /></a>

- Proposition 1

    1. **Defination of *Characteristic Portfolio***:
    
        For any attribute 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\large&space;a\neq&space;0" target="_blank"><img src="https://latex.codecogs.com/png.latex?\inline&space;\large&space;a\neq&space;0" title="\large a\neq 0" /></a> ,
        
        there is a **unique** characteristic portfolio 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\large&space;\mathbf{h}_a&space;=&space;\frac{\mathbf{V}^{-1}\mathbf{a}}{\mathbf{a}^T\mathbf{V}^{-1}\mathbf{a}}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\large&space;\mathbf{h}_a&space;=&space;\frac{\mathbf{V}^{-1}\mathbf{a}}{\mathbf{a}^T\mathbf{V}^{-1}\mathbf{a}}" title="\large \mathbf{h}_a = \frac{\mathbf{V}^{-1}\mathbf{a}}{\mathbf{a}^T\mathbf{V}^{-1}\mathbf{a}}" /></a>

        that has **minimum risk** and **unit exposure** to 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\large&space;a" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\large&space;a" title="\large a" /></a> .

        - Characteristic portfolio are not necessarily fully invested.
        - They can include long and short positions and have significant leverage.
    
        **Proof :**

        We derive the holdings of characteristic portfolio by solving the optimization problem:

        <a href="https://www.codecogs.com/eqnedit.php?latex=\begin{matrix}&space;\min_{\mathbf{h}}&space;\,\,\sigma_{\mathbf{h}}^2&space;=&space;\mathbf{h}^T\mathbf{Vh}\\&space;\textup{s.t.}\,&space;\,&space;\mathbf{h}^T\mathbf{a}=1&space;\end{matrix}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\begin{matrix}&space;\min_{\mathbf{h}}&space;\,\,\sigma_{\mathbf{h}}^2&space;=&space;\mathbf{h}^T\mathbf{Vh}\\&space;\textup{s.t.}\,&space;\,&space;\mathbf{h}^T\mathbf{a}=1&space;\end{matrix}" title="\begin{matrix} \min_{\mathbf{h}} \,\,\sigma_{\mathbf{h}}^2 = \mathbf{h}^T\mathbf{Vh}\\ \textup{s.t.}\, \, \mathbf{h}^T\mathbf{a}=1 \end{matrix}" /></a>

        An important equation resulting from the optimization is:

        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{Vh}_a=\sigma_a^2\mathbf{a}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{Vh}_a=\sigma_a^2\mathbf{a}" title="\mathbf{Vh}_a=\sigma_a^2\mathbf{a}" /></a>
    
    2. The variance of the charateristic portfolio is

        <a href="https://www.codecogs.com/eqnedit.php?latex=\sigma_a^2=\mathbf{h}_a^T\mathbf{Vh}_a=\frac{1}{\mathbf{a}^T\mathbf{V}^{-1}\mathbf{a}}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\sigma_a^2=\mathbf{h}_a^T\mathbf{Vh}_a=\frac{1}{\mathbf{a}^T\mathbf{V}^{-1}\mathbf{a}}" title="\sigma_a^2=\mathbf{h}_a^T\mathbf{Vh}_a=\frac{1}{\mathbf{a}^T\mathbf{V}^{-1}\mathbf{a}}" /></a>

    3. The beta of all assets with respect to portfolio 
    <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\mathbf{h}_a" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\mathbf{h}_a" title="\mathbf{h}_a" /></a> 
    is equal to 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\mathbf{a}=\frac{\mathbf{Vh}_a}{\sigma_a^2}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\mathbf{a}=\frac{\mathbf{Vh}_a}{\sigma_a^2}" title="\mathbf{a}=\frac{\mathbf{Vh}_a}{\sigma_a^2}" /></a>


        **Proof :**

        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{V}=\begin{bmatrix}&space;\sigma_{11}&space;&&space;\sigma_{12}&space;&&space;\cdots&space;&&space;\sigma_{1N}\\&space;\sigma_{21}&space;&&space;\sigma_{22}&space;&&space;\cdots&space;&&space;\sigma_{2N}\\&space;\vdots&space;&&space;\vdots&space;&&space;\ddots&space;&&space;\vdots\\&space;\sigma_{N1}&space;&&space;\sigma_{N2}&space;&&space;\cdots&space;&&space;\sigma_{NN}&space;\end{bmatrix}&space;,&space;\,\,\mathbf{h}=\begin{bmatrix}&space;h_1\\&space;h_2\\&space;\vdots&space;\\&space;h_N&space;\end{bmatrix}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{V}=\begin{bmatrix}&space;\sigma_{11}&space;&&space;\sigma_{12}&space;&&space;\cdots&space;&&space;\sigma_{1N}\\&space;\sigma_{21}&space;&&space;\sigma_{22}&space;&&space;\cdots&space;&&space;\sigma_{2N}\\&space;\vdots&space;&&space;\vdots&space;&&space;\ddots&space;&&space;\vdots\\&space;\sigma_{N1}&space;&&space;\sigma_{N2}&space;&&space;\cdots&space;&&space;\sigma_{NN}&space;\end{bmatrix}&space;,&space;\,\,\mathbf{h}=\begin{bmatrix}&space;h_1\\&space;h_2\\&space;\vdots&space;\\&space;h_N&space;\end{bmatrix}" title="\mathbf{V}=\begin{bmatrix} \sigma_{11} & \sigma_{12} & \cdots & \sigma_{1N}\\ \sigma_{21} & \sigma_{22} & \cdots & \sigma_{2N}\\ \vdots & \vdots & \ddots & \vdots\\ \sigma_{N1} & \sigma_{N2} & \cdots & \sigma_{NN} \end{bmatrix} , \,\,\mathbf{h}=\begin{bmatrix} h_1\\ h_2\\ \vdots \\ h_N \end{bmatrix}" /></a> 

        Thus,

        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{Vh}&=\begin{bmatrix}&space;\sigma_{11}&space;&&space;\sigma_{12}&space;&&space;\cdots&space;&&space;\sigma_{1N}\\&space;\sigma_{21}&space;&&space;\sigma_{22}&space;&&space;\cdots&space;&&space;\sigma_{2N}\\&space;\vdots&space;&&space;\vdots&space;&&space;\ddots&space;&&space;\vdots\\&space;\sigma_{N1}&space;&&space;\sigma_{N2}&space;&&space;\cdots&space;&&space;\sigma_{NN}&space;\end{bmatrix}&space;\begin{bmatrix}&space;h_1\\&space;h_2\\&space;\vdots&space;\\&space;h_N&space;\end{bmatrix}&space;=&space;\begin{bmatrix}&space;\sigma_{11}h_1&plus;\sigma_{12}h_2&plus;\cdots&plus;\sigma_{1N}h_N\\&space;\sigma_{21}h_1&plus;\sigma_{22}h_2&plus;\cdots&plus;\sigma_{2N}h_N\\&space;\vdots&space;\\&space;\sigma_{N1}h_1&plus;\sigma_{N2}h_2&plus;\cdots&plus;\sigma_{NN}h_N&space;\end{bmatrix}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{Vh}&=\begin{bmatrix}&space;\sigma_{11}&space;&&space;\sigma_{12}&space;&&space;\cdots&space;&&space;\sigma_{1N}\\&space;\sigma_{21}&space;&&space;\sigma_{22}&space;&&space;\cdots&space;&&space;\sigma_{2N}\\&space;\vdots&space;&&space;\vdots&space;&&space;\ddots&space;&&space;\vdots\\&space;\sigma_{N1}&space;&&space;\sigma_{N2}&space;&&space;\cdots&space;&&space;\sigma_{NN}&space;\end{bmatrix}&space;\begin{bmatrix}&space;h_1\\&space;h_2\\&space;\vdots&space;\\&space;h_N&space;\end{bmatrix}&space;=&space;\begin{bmatrix}&space;\sigma_{11}h_1&plus;\sigma_{12}h_2&plus;\cdots&plus;\sigma_{1N}h_N\\&space;\sigma_{21}h_1&plus;\sigma_{22}h_2&plus;\cdots&plus;\sigma_{2N}h_N\\&space;\vdots&space;\\&space;\sigma_{N1}h_1&plus;\sigma_{N2}h_2&plus;\cdots&plus;\sigma_{NN}h_N&space;\end{bmatrix}" title="\mathbf{Vh}&=\begin{bmatrix} \sigma_{11} & \sigma_{12} & \cdots & \sigma_{1N}\\ \sigma_{21} & \sigma_{22} & \cdots & \sigma_{2N}\\ \vdots & \vdots & \ddots & \vdots\\ \sigma_{N1} & \sigma_{N2} & \cdots & \sigma_{NN} \end{bmatrix} \begin{bmatrix} h_1\\ h_2\\ \vdots \\ h_N \end{bmatrix} = \begin{bmatrix} \sigma_{11}h_1+\sigma_{12}h_2+\cdots+\sigma_{1N}h_N\\ \sigma_{21}h_1+\sigma_{22}h_2+\cdots+\sigma_{2N}h_N\\ \vdots \\ \sigma_{N1}h_1+\sigma_{N2}h_2+\cdots+\sigma_{NN}h_N \end{bmatrix}" /></a>

        In other hand,

        <a href="https://www.codecogs.com/eqnedit.php?latex=\textup{Cov}\left&space;(r_i,r_{\mathbf{h}_a}&space;\right&space;)=\textup{Cov}\left&space;(r_i,\sum_{n=1}^Nh_nr_n&space;\right&space;)=\sum_{n=1}^N\textup{Cov}\left(&space;r_i,r_n&space;\right)h_n=\sum_{n=1}^N\sigma_{in}h_n" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\textup{Cov}\left&space;(r_i,r_{\mathbf{h}_a}&space;\right&space;)=\textup{Cov}\left&space;(r_i,\sum_{n=1}^Nh_nr_n&space;\right&space;)=\sum_{n=1}^N\textup{Cov}\left(&space;r_i,r_n&space;\right)h_n=\sum_{n=1}^N\sigma_{in}h_n" title="\textup{Cov}\left (r_i,r_{\mathbf{h}_a} \right )=\textup{Cov}\left (r_i,\sum_{n=1}^Nh_nr_n \right )=\sum_{n=1}^N\textup{Cov}\left( r_i,r_n \right)h_n=\sum_{n=1}^N\sigma_{in}h_n" /></a>

        Therefore,

        <a href="https://www.codecogs.com/eqnedit.php?latex=\boldsymbol{\beta}&space;=&space;\begin{bmatrix}&space;\beta_1\\&space;\beta_2\\&space;\vdots\\&space;\beta_N&space;\end{bmatrix}=&space;\begin{bmatrix}&space;\frac{\textup{Cov}\left&space;(&space;r_1,r_{\mathbf{h}_a}&space;\right&space;)}{\textup{Var}\left&space;(&space;r_{\mathbf{h}_a}&space;\right&space;)}\\&space;\frac{\textup{Cov}\left&space;(&space;r_2,r_{\mathbf{h}_a}&space;\right&space;)}{\textup{Var}\left&space;(&space;r_{\mathbf{h}_a}&space;\right&space;)}\\&space;\vdots\\&space;\frac{\textup{Cov}\left&space;(&space;r_N,r_{\mathbf{h}_a}&space;\right&space;)}{\textup{Var}\left&space;(&space;r_{\mathbf{h}_a}&space;\right&space;)}&space;\end{bmatrix}&space;=&space;\frac{1}{\sigma_a^2}\begin{bmatrix}&space;\sum_{n=1}^N\sigma_{1n}h_n\\&space;\sum_{n=1}^N\sigma_{2n}h_n\\&space;\vdots\\&space;\sum_{n=1}^N\sigma_{Nn}h_n&space;\end{bmatrix}&space;=\frac{\mathbf{Vh}}{\sigma_a^2}=\mathbf{a}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\boldsymbol{\beta}&space;=&space;\begin{bmatrix}&space;\beta_1\\&space;\beta_2\\&space;\vdots\\&space;\beta_N&space;\end{bmatrix}=&space;\begin{bmatrix}&space;\frac{\textup{Cov}\left&space;(&space;r_1,r_{\mathbf{h}_a}&space;\right&space;)}{\textup{Var}\left&space;(&space;r_{\mathbf{h}_a}&space;\right&space;)}\\&space;\frac{\textup{Cov}\left&space;(&space;r_2,r_{\mathbf{h}_a}&space;\right&space;)}{\textup{Var}\left&space;(&space;r_{\mathbf{h}_a}&space;\right&space;)}\\&space;\vdots\\&space;\frac{\textup{Cov}\left&space;(&space;r_N,r_{\mathbf{h}_a}&space;\right&space;)}{\textup{Var}\left&space;(&space;r_{\mathbf{h}_a}&space;\right&space;)}&space;\end{bmatrix}&space;=&space;\frac{1}{\sigma_a^2}\begin{bmatrix}&space;\sum_{n=1}^N\sigma_{1n}h_n\\&space;\sum_{n=1}^N\sigma_{2n}h_n\\&space;\vdots\\&space;\sum_{n=1}^N\sigma_{Nn}h_n&space;\end{bmatrix}&space;=\frac{\mathbf{Vh}}{\sigma_a^2}=\mathbf{a}" title="\boldsymbol{\beta} = \begin{bmatrix} \beta_1\\ \beta_2\\ \vdots\\ \beta_N \end{bmatrix}= \begin{bmatrix} \frac{\textup{Cov}\left ( r_1,r_{\mathbf{h}_a} \right )}{\textup{Var}\left ( r_{\mathbf{h}_a} \right )}\\ \frac{\textup{Cov}\left ( r_2,r_{\mathbf{h}_a} \right )}{\textup{Var}\left ( r_{\mathbf{h}_a} \right )}\\ \vdots\\ \frac{\textup{Cov}\left ( r_N,r_{\mathbf{h}_a} \right )}{\textup{Var}\left ( r_{\mathbf{h}_a} \right )} \end{bmatrix} = \frac{1}{\sigma_a^2}\begin{bmatrix} \sum_{n=1}^N\sigma_{1n}h_n\\ \sum_{n=1}^N\sigma_{2n}h_n\\ \vdots\\ \sum_{n=1}^N\sigma_{Nn}h_n \end{bmatrix} =\frac{\mathbf{Vh}}{\sigma_a^2}=\mathbf{a}" /></a>

    4. Two attributes 
        <a href="https://www.codecogs.com/eqnedit.php?latex=a" target="_blank"><img src="https://latex.codecogs.com/gif.latex?a" title="a" /></a>
        and 
        <a href="https://www.codecogs.com/eqnedit.php?latex=d" target="_blank"><img src="https://latex.codecogs.com/gif.latex?d" title="d" /></a>
        with characteristic portfolio 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_a" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_a" title="\mathbf{h}_a" /></a>
        and 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_d" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_d" title="\mathbf{h}_d" /></a>

        Let

        <a href="https://www.codecogs.com/eqnedit.php?latex=a_d=\mathbf{a}^T\mathbf{h}_d" target="_blank"><img src="https://latex.codecogs.com/gif.latex?a_d=\mathbf{a}^T\mathbf{h}_d" title="a_d=\mathbf{a}^T\mathbf{h}_d" /></a>
         , i.e. exposure of portfolio 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_d" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_d" title="\mathbf{h}_d" /></a>
        on 
        <a href="https://www.codecogs.com/eqnedit.php?latex=a" target="_blank"><img src="https://latex.codecogs.com/gif.latex?a" title="a" /></a>
         , and

        <a href="https://www.codecogs.com/eqnedit.php?latex=d_a=\mathbf{d}^T\mathbf{h}_a" target="_blank"><img src="https://latex.codecogs.com/gif.latex?d_a=\mathbf{d}^T\mathbf{h}_a" title="d_a=\mathbf{d}^T\mathbf{h}_a" /></a>
         , i.e. exposure of portfolio 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_a" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_a" title="\mathbf{h}_a" /></a>
        on 
        <a href="https://www.codecogs.com/eqnedit.php?latex=d" target="_blank"><img src="https://latex.codecogs.com/gif.latex?d" title="d" /></a> .

        Then the covariance of the two characteristic portfolio satisfies

        <a href="https://www.codecogs.com/eqnedit.php?latex=\sigma_{a,d}=a_d\sigma_a^2=d_a\sigma_d^2" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\sigma_{a,d}=a_d\sigma_a^2=d_a\sigma_d^2" title="\sigma_{a,d}=a_d\sigma_a^2=d_a\sigma_d^2" /></a>

    5. If 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\kappa&space;>0" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\kappa&space;>0" title="\kappa >0" /></a>
        is a positive scalar, then the characteristic portfolio of 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\kappa&space;a" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\kappa&space;a" title="\kappa a" /></a>
        is
        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_a/&space;\kappa" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_a/&space;\kappa" title="\mathbf{h}_a/ \kappa" /></a> .
    
    6. If 

        <a href="https://www.codecogs.com/eqnedit.php?latex=a=\kappa_dd&plus;\kappa_ff" target="_blank"><img src="https://latex.codecogs.com/gif.latex?a=\kappa_dd&plus;\kappa_ff" title="a=\kappa_dd+\kappa_ff" /></a>

        then

        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_a=\sigma_a^2\left&space;(\frac{\kappa_d}{\sigma_d^2}&space;\mathbf{h}_d&space;&plus;&space;\frac{\kappa_f}{\sigma_f^2}&space;\mathbf{h}_f&space;\right&space;)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_a=\sigma_a^2\left&space;(\frac{\kappa_d}{\sigma_d^2}&space;\mathbf{h}_d&space;&plus;&space;\frac{\kappa_f}{\sigma_f^2}&space;\mathbf{h}_f&space;\right&space;)" title="\mathbf{h}_a=\sigma_a^2\left (\frac{\kappa_d}{\sigma_d^2} \mathbf{h}_d + \frac{\kappa_f}{\sigma_f^2} \mathbf{h}_f \right )" /></a>

        where

        <a href="https://www.codecogs.com/eqnedit.php?latex=\frac{1}{\sigma_a^2}=\frac{\kappa_da_d}{\sigma_d^2}&space;&plus;&space;\frac{\kappa_fa_f}{\sigma_f^2}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\frac{1}{\sigma_a^2}=\frac{\kappa_da_d}{\sigma_d^2}&space;&plus;&space;\frac{\kappa_fa_f}{\sigma_f^2}" title="\frac{1}{\sigma_a^2}=\frac{\kappa_da_d}{\sigma_d^2} + \frac{\kappa_fa_f}{\sigma_f^2}" /></a>
    
- Examples
    - **Portfolio C**

        Attribute : 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{e}=[1,1,\cdots,1]^T" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{e}=[1,1,\cdots,1]^T" title="\mathbf{e}=[1,1,\cdots,1]^T" /></a>

        Portfolio's exposure to 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{e}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{e}" title="\mathbf{e}" /></a>
        , 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;e_P=\sum_nh_{P,n}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;e_P=\sum_nh_{P,n}" title="e_P=\sum_nh_{P,n}" /></a>
        , measures the extent of its investment. If 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;e_P=1" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;e_P=1" title="e_P=1" /></a>
        , then the portfolio is *fully invested*.

        **Portfolio C = the minimum-risk fully invested portfolio**:

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\mathbf{h}_C=\frac{\mathbf{V}^{-1}\mathbf{e}}{\mathbf{e}^T\mathbf{V}^{-1}\mathbf{e}}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\mathbf{h}_C=\frac{\mathbf{V}^{-1}\mathbf{e}}{\mathbf{e}^T\mathbf{V}^{-1}\mathbf{e}}" title="\mathbf{h}_C=\frac{\mathbf{V}^{-1}\mathbf{e}}{\mathbf{e}^T\mathbf{V}^{-1}\mathbf{e}}" /></a>

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\sigma_C^2=\frac{1}{\mathbf{e}^T\mathbf{V}^{-1}\mathbf{e}}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\sigma_C^2=\frac{1}{\mathbf{e}^T\mathbf{V}^{-1}\mathbf{e}}" title="\sigma_C^2=\frac{1}{\mathbf{e}^T\mathbf{V}^{-1}\mathbf{e}}" /></a>

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\mathbf{e}=\frac{\mathbf{Vh}_C}{\sigma_C^2}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\mathbf{e}=\frac{\mathbf{Vh}_C}{\sigma_C^2}" title="\mathbf{e}=\frac{\mathbf{Vh}_C}{\sigma_C^2}" /></a>
        , which indicates that every asset has a beta of 1 with respect to C.

        Indication behind is that 
        - each asset's marginal contribution to porfolio risk is proportional to its beta with respect to the portfolio.
        - since portfolio C is the minimum-risk portfolio, each asset must have identical marginal contribution to risk. 
        - otherwise we could trade assets to reduce portfolio risk.

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\sigma_{P,C}=e_P\sigma_C^2" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\sigma_{P,C}=e_P\sigma_C^2" title="\sigma_{P,C}=e_P\sigma_C^2" /></a>
        , any fully invested portfolio's covariance with C is 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\sigma_C^2" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\sigma_C^2" title="\sigma_C^2" /></a> .

    - **Portfolio B**

        Attribute : 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\boldsymbol{\beta}=\frac{\mathbf{Vh}_B}{\sigma_B^2}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\boldsymbol{\beta}=\frac{\mathbf{Vh}_B}{\sigma_B^2}" title="\boldsymbol{\beta}=\frac{\mathbf{Vh}_B}{\sigma_B^2}" /></a>
         , B is some benchmark portfolio.

        Obviously, the beta of benchmark portfolio B is 1: 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\beta_B=\boldsymbol{\beta}^T\mathbf{h}_B=1" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\beta_B=\boldsymbol{\beta}^T\mathbf{h}_B=1" title="\beta_B=\boldsymbol{\beta}^T\mathbf{h}_B=1" /></a>

        Portfolio B = Characteristic portfolio of beta = The benchmark : 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\mathbf{h}_B=\frac{\mathbf{V}^{-1}\boldsymbol{\beta}}{\boldsymbol{\beta}^T\mathbf{V}^{-1}\boldsymbol{\beta}}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\mathbf{h}_B=\frac{\mathbf{V}^{-1}\boldsymbol{\beta}}{\boldsymbol{\beta}^T\mathbf{V}^{-1}\boldsymbol{\beta}}" title="\mathbf{h}_B=\frac{\mathbf{V}^{-1}\boldsymbol{\beta}}{\boldsymbol{\beta}^T\mathbf{V}^{-1}\boldsymbol{\beta}}" /></a>

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\sigma_B^2=\frac{1}{\boldsymbol{\beta}^T\mathbf{V}^{-1}\boldsymbol{\beta}}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\sigma_B^2=\frac{1}{\boldsymbol{\beta}^T\mathbf{V}^{-1}\boldsymbol{\beta}}" title="\sigma_B^2=\frac{1}{\boldsymbol{\beta}^T\mathbf{V}^{-1}\boldsymbol{\beta}}" /></a>

        Then benchmark is the minimum-risk portfolio with a beta of 1.

        The relationship between portfolios B and C is 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\sigma_{B,C}=e_B\sigma_C^2=\beta_C\sigma_B^2" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\sigma_{B,C}=e_B\sigma_C^2=\beta_C\sigma_B^2" title="\sigma_{B,C}=e_B\sigma_C^2=\beta_C\sigma_B^2" /></a>

    - **Portfolio q**

        Attribute : the expected excess return 
        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\mathbf{f}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\mathbf{f}" title="\mathbf{f}" /></a>

        Sharpe ratio is the expected excess return on portfolio P divided by its risk : 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\textup{SR}_P=\frac{f_p}{\sigma_P}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\textup{SR}_P=\frac{f_p}{\sigma_P}" title="\textup{SR}_P=\frac{f_p}{\sigma_P}" /></a>

        Portfolio q :

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\mathbf{h}_q=\frac{\mathbf{V}^{-1}\mathbf{f}}{\mathbf{f}^T\mathbf{V}^{-1}\mathbf{f}}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\mathbf{h}_q=\frac{\mathbf{V}^{-1}\mathbf{f}}{\mathbf{f}^T\mathbf{V}^{-1}\mathbf{f}}" title="\mathbf{h}_q=\frac{\mathbf{V}^{-1}\mathbf{f}}{\mathbf{f}^T\mathbf{V}^{-1}\mathbf{f}}" /></a>

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;f_q=\mathbf{f}^T\mathbf{h}_q=1" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;f_q=\mathbf{f}^T\mathbf{h}_q=1" title="f_q=\mathbf{f}^T\mathbf{h}_q=1" /></a>

        <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\sigma_q^2=\frac{1}{\mathbf{f}^T\mathbf{V}^{-1}\mathbf{f}}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\sigma_q^2=\frac{1}{\mathbf{f}^T\mathbf{V}^{-1}\mathbf{f}}" title="\sigma_q^2=\frac{1}{\mathbf{f}^T\mathbf{V}^{-1}\mathbf{f}}" /></a>

        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{f}=\frac{\mathbf{Vh}_q}{\sigma_q^2}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{f}=\frac{\mathbf{Vh}_q}{\sigma_q^2}" title="\mathbf{f}=\frac{\mathbf{Vh}_q}{\sigma_q^2}" /></a>

    - Proposition 2 : Portfolio with the max Sharpe Ratio

        1. **Portfolio q is the portfolio with the max Sharpe Ratio**.
        
            <a href="https://www.codecogs.com/eqnedit.php?latex=\inline&space;\textup{SR}_q=\max&space;\left&space;\{&space;\textup{SR}_P|P&space;\right&space;\}=\left&space;(&space;\mathbf{f}^T\mathbf{V}^{-1}\mathbf{f}&space;\right&space;)^{\frac{1}{2}}=\frac{1}{\sigma_q}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\inline&space;\textup{SR}_q=\max&space;\left&space;\{&space;\textup{SR}_P|P&space;\right&space;\}=\left&space;(&space;\mathbf{f}^T\mathbf{V}^{-1}\mathbf{f}&space;\right&space;)^{\frac{1}{2}}=\frac{1}{\sigma_q}" title="\textup{SR}_q=\max \left \{ \textup{SR}_P|P \right \}=\left ( \mathbf{f}^T\mathbf{V}^{-1}\mathbf{f} \right )^{\frac{1}{2}}=\frac{1}{\sigma_q}" /></a>

        2. If <a href="https://www.codecogs.com/eqnedit.php?latex=\rho_{P,q}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\rho_{P,q}" title="\rho_{P,q}" /></a>
         is the correlation between P and q, then

            <a href="https://www.codecogs.com/eqnedit.php?latex=\textup{SR}_P=\rho_{P,q}\textup{SR}_q" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\textup{SR}_P=\rho_{P,q}\textup{SR}_q" title="\textup{SR}_P=\rho_{P,q}\textup{SR}_q" /></a>
        
        3. The fraction of q invested in risky assets is

            <a href="https://www.codecogs.com/eqnedit.php?latex=e_q&space;=&space;\frac{f_c\sigma_q^2}{\sigma_C^2}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?e_q&space;=&space;\frac{f_c\sigma_q^2}{\sigma_C^2}" title="e_q = \frac{f_c\sigma_q^2}{\sigma_C^2}" /></a>

    - Portfolio A

        Attribute : <a href="https://www.codecogs.com/eqnedit.php?latex=\boldsymbol{\alpha}&space;=&space;\mathbf{f}-\boldsymbol{\beta}f_B" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\boldsymbol{\alpha}&space;=&space;\mathbf{f}-\boldsymbol{\beta}f_B" title="\boldsymbol{\alpha} = \mathbf{f}-\boldsymbol{\beta}f_B" /></a>

        Portfolio A involve significant leverage.

        We can express Portfolio A in terms of Portfolio B and Portfolio q.

        **The Benchmark, i.e. Portfolio B has zero alpha**, since

        <a href="https://www.codecogs.com/eqnedit.php?latex=\alpha_B=\boldsymbol{\alpha}^T\mathbf{h}_B=\mathbf{f}^T\mathbf{h}_B-\boldsymbol{\beta}\mathbf{h}_B\cdot&space;f_B=0" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\alpha_B=\boldsymbol{\alpha}^T\mathbf{h}_B=\mathbf{f}^T\mathbf{h}_B-\boldsymbol{\beta}\mathbf{h}_B\cdot&space;f_B=0" title="\alpha_B=\boldsymbol{\alpha}^T\mathbf{h}_B=\mathbf{f}^T\mathbf{h}_B-\boldsymbol{\beta}\mathbf{h}_B\cdot f_B=0" /></a>

        **Portfolio A has zero beta, and A and B are uncorrelated**, since

        <a href="https://www.codecogs.com/eqnedit.php?latex=\sigma_{B,A}=\alpha_B\sigma_A^2=\beta_A\sigma_B^2\,\,\Rightarrow\,\,&space;\beta_A=0" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\sigma_{B,A}=\alpha_B\sigma_A^2=\beta_A\sigma_B^2\,\,\Rightarrow\,\,&space;\beta_A=0" title="\sigma_{B,A}=\alpha_B\sigma_A^2=\beta_A\sigma_B^2\,\,\Rightarrow\,\, \beta_A=0" /></a>

    - Portfolio Q

        Assume that Portfolio C has positive expected excess return : 
        <a href="https://www.codecogs.com/eqnedit.php?latex=f_C>0" target="_blank"><img src="https://latex.codecogs.com/gif.latex?f_C>0" title="f_C>0" /></a> 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\Rightarrow" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\Rightarrow" title="\Rightarrow" /></a>
         Portfolio q is net long : 
        <a href="https://www.codecogs.com/eqnedit.php?latex=e_q>0" target="_blank"><img src="https://latex.codecogs.com/gif.latex?e_q>0" title="e_q>0" /></a>

        Attribute : <a href="https://www.codecogs.com/eqnedit.php?latex=e_q\mathbf{f}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?e_q\mathbf{f}" title="e_q\mathbf{f}" /></a>

        Portfolio Q is *fully invested*, with holdings 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_Q=\mathbf{h}_q/e_q" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_Q=\mathbf{h}_q/e_q" title="\mathbf{h}_Q=\mathbf{h}_q/e_q" /></a>
    
        Sharpe Ratio of Portfolio Q and q are the same: 

        <a href="https://www.codecogs.com/eqnedit.php?latex=\textup{SR}_Q=\textup{SR}_q" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\textup{SR}_Q=\textup{SR}_q" title="\textup{SR}_Q=\textup{SR}_q" /></a>

    - Proposition 3

        1. For any portfolio P with a correlation <a href="https://www.codecogs.com/eqnedit.php?latex=\rho_{P,Q}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\rho_{P,Q}" title="\rho_{P,Q}" /></a>  with portfolio Q, we have

            <a href="https://www.codecogs.com/eqnedit.php?latex=\textup{SR}_P=\rho_{P,Q}\textup{SR}_Q" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\textup{SR}_P=\rho_{P,Q}\textup{SR}_Q" title="\textup{SR}_P=\rho_{P,Q}\textup{SR}_Q" /></a>

        2. How portfolio Q "explains" expected returns:

            <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{f}=f_Q\boldsymbol{\beta}_{\textup{with&space;respect&space;to&space;}&space;Q}=f_Q\cdot&space;\frac{\mathbf{Vh}_Q}{\sigma_Q^2}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{f}=f_Q\boldsymbol{\beta}_{\textup{with&space;respect&space;to&space;}&space;Q}=f_Q\cdot&space;\frac{\mathbf{Vh}_Q}{\sigma_Q^2}" title="\mathbf{f}=f_Q\boldsymbol{\beta}_{\textup{with respect to } Q}=f_Q\cdot \frac{\mathbf{Vh}_Q}{\sigma_Q^2}" /></a>

        3.

        4.

    - Partial List of Characteristic Portfolios

        |Characteristic|Portfolio|Comments|
        |:-:|:-:|:-:|
        |<a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{e}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{e}" title="\mathbf{e}" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_C" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_C" title="\mathbf{h}_C" /></a>|-
        |<a href="https://www.codecogs.com/eqnedit.php?latex=\boldsymbol{\beta}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\boldsymbol{\beta}" title="\boldsymbol{\beta}" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_B" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_B" title="\mathbf{h}_B" /></a>|-
        |<a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{f}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{f}" title="\mathbf{f}" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_q" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_q" title="\mathbf{h}_q" /></a>|-
        |<a href="https://www.codecogs.com/eqnedit.php?latex=\boldsymbol{\alpha}&space;=&space;\mathbf{f}-\boldsymbol{\beta}f_B" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\boldsymbol{\alpha}&space;=&space;\mathbf{f}-\boldsymbol{\beta}f_B" title="\boldsymbol{\alpha} = \mathbf{f}-\boldsymbol{\beta}f_B" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_A" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_A" title="\mathbf{h}_A" /></a>|-
        |<a href="https://www.codecogs.com/eqnedit.php?latex=e_q\mathbf{f}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?e_q\mathbf{f}" title="e_q\mathbf{f}" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_Q" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_Q" title="\mathbf{h}_Q" /></a>|<a href="https://www.codecogs.com/eqnedit.php?latex=f_C>0" target="_blank"><img src="https://latex.codecogs.com/gif.latex?f_C>0" title="f_C>0" /></a>

            
### The Efficient Frontier

- Two fully invested characteristic portfolios : 
    - Portfolio C
    - Portfolio Q

- A fully invested portfolio is **efficient** if it has minimum risk with the same expected return :

    <a href="https://www.codecogs.com/eqnedit.php?latex=\begin{align*}&space;\min&space;_{\mathbf{h}}&space;&\,\,&space;\frac{\mathbf{h}^T\mathbf{Vh}}{2}\\&space;\textup{s.t.}&space;&\,\,\mathbf{e}^T\mathbf{h}=1&space;\\&space;&&space;\,\,\mathbf{f}^T\mathbf{h}=f_P&space;\end{align*}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\begin{align*}&space;\min&space;_{\mathbf{h}}&space;&\,\,&space;\frac{\mathbf{h}^T\mathbf{Vh}}{2}\\&space;\textup{s.t.}&space;&\,\,\mathbf{e}^T\mathbf{h}=1&space;\\&space;&&space;\,\,\mathbf{f}^T\mathbf{h}=f_P&space;\end{align*}" title="\begin{align*} \min _{\mathbf{h}} &\,\, \frac{\mathbf{h}^T\mathbf{Vh}}{2}\\ \textup{s.t.} &\,\,\mathbf{e}^T\mathbf{h}=1 \\ & \,\,\mathbf{f}^T\mathbf{h}=f_P \end{align*}" /></a>

- Efficient frontier portfolios are weighted combinations of Portfolio C and Portfolio Q :

    <a href="https://www.codecogs.com/eqnedit.php?latex=\mathbf{h}_P=\left&space;(&space;\frac{f_Q-f_P}{f_Q-f_C}&space;\right&space;)\mathbf{h}_C&plus;\left&space;(&space;\frac{f_P-f_C}{f_Q-f_C}&space;\right&space;)\mathbf{h}_Q" target="_blank"><img src="https://latex.codecogs.com/gif.latex?\mathbf{h}_P=\left&space;(&space;\frac{f_Q-f_P}{f_Q-f_C}&space;\right&space;)\mathbf{h}_C&plus;\left&space;(&space;\frac{f_P-f_C}{f_Q-f_C}&space;\right&space;)\mathbf{h}_Q" title="\mathbf{h}_P=\left ( \frac{f_Q-f_P}{f_Q-f_C} \right )\mathbf{h}_C+\left ( \frac{f_P-f_C}{f_Q-f_C} \right )\mathbf{h}_Q" /></a>

### Capital Asset Pricing Model

- Portolio Q is the market portfolio M.

- The market portfolio M is the portfolio with the highest ratio of expected excess return to risk.


