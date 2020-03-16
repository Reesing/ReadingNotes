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

